CPP_STANDARD := c++17
CXXFLAGS := -O3 -fPIC -std=$(CPP_STANDARD) -fpermissive
PREFIX:=.
EMULATOR_EXTRAS := /cvmfs/cms.cern.ch/el9_amd64_gcc12/external/hls4mlEmulatorExtras/1.1.4-7f1f5ec35d8cc94e9bab71c7ff9456f1
AP_TYPES := $(EMULATOR_EXTRAS)/include/ap_types
HLS_ROOT := /cvmfs/cms.cern.ch/el9_amd64_gcc12/external/hls/2025.05-4da036171b10090d7d21e15c49bb27a1
HLS4ML_INCLUDE := $(EMULATOR_EXTRAS)/include/hls4ml
INCLUDES := -I$(HLS4ML_INCLUDE) -I$(AP_TYPES) -I$(HLS_ROOT)/include
#LD_FLAGS := -L$(EMULATOR_EXTRAS)/lib64 -
LD_FLAGS := -L$(EMULATOR_EXTRAS)/lib64 -lemulator_interface
ALL_VERSIONS:=L1TSC4NGJetModel_v0/L1TSC4NGJetModel_v0.so L1TSC4NGJetModel_v1/L1TSC4NGJetModel_v1.so L1TSC4NGJetModel_v1_0_1/L1TSC4NGJetModel_v1_0_1.so L1TSC4NGJetModel_v2_0_0/L1TSC4NGJetModel_v2_0_0.so L1TSC4NGJetModel_Pu/L1TSC4NGJetModel_Pu.so


.DEFAULT_GOAL := all
.PHONY: all clean install

all: $(ALL_VERSIONS)
	@cp $(ALL_VERSIONS) ./
	@echo All OK

install: all
	@rm -rf $(PREFIX)/lib64
	@mkdir -p $(PREFIX)/lib64
	cp L1TSC4NGJetModel_*.so $(PREFIX)/lib64

%.so:
	$(MAKE) -C $(@D) INCLUDES="$(INCLUDES)" LD_FLAGS="$(LD_FLAGS)" CXXFLAGS="$(CXXFLAGS)"

clean:
	rm L1TSC4NGJetModel_*.so
