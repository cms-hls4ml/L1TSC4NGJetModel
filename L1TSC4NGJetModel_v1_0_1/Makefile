.PHONY: clean

L1TSC4NGJetModel_v1_0_1.so: L1TSC4NGJetModel_emulator_v1_0_1.o L1TSC4NGJetModel_v1_0_1.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm L1TSC4NGJetModel_emulator_v1_0_1.o L1TSC4NGJetModel_v1_0_1.o L1TSC4NGJetModel_v1_0_1.so
