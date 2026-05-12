.PHONY: clean

L1TSC4NGJetModel_Pu.so: L1TSC4NGJetModel_emulator_Pu.o L1TSC4NGJetModel_Pu.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: NN/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm L1TSC4NGJetModel_emulator_Pu.o L1TSC4NGJetModel_Pu.o L1TSC4NGJetModel_Pu.so
