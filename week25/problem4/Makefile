CXX = g++
DEP = showticket.o mian.o
CXXFLAGS = -std=c++17

main: $(DEP)
	$(CXX) -o $@ $^

showticket.o: showticket.h showticket.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ showticket.cpp
mian.o: showticket.h main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ main.cpp

.PHONY: clean
clean:
	rm -f *.o *~ main
