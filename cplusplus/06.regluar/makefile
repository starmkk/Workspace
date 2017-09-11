LDFLAGS=
LIBS=

CC = gcc
CFLAGS = -O3 -Wall 

#CXX = g++ -std=c++11
CXX = g++ -std=c++0x
CXXFLAGS = -O3 -Wall 




all: regrex regrex_assign regrex_mark_count

regrex_mark_count: regrex_mark_count.o
	$(CXX) $(CXXFLAGS) -o regrex_mark_count regrex_mark_count.o

regrex_mark_count.o: regrex_mark_count.cpp
	$(CXX) $(CXXFLAGS) -c regrex_mark_count.cpp

regrex_assign: regrex_assign.o
	$(CXX) $(CXXFLAGS) -o regrex_assign regrex_assign.o

regrex_assign.o: regrex_assign.cpp
	$(CXX) $(CXXFLAGS) -c regrex_assign.cpp

regrex : regrex.o
	$(CXX) $(CXXFLAGS) -o regrex regrex.o $(LIBS)

regrex.o: regrex.cpp
	$(CXX) $(CXXFLAGS) -c regrex.cpp

