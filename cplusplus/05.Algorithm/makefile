LDFLAGS=
LIBS=

CC = gcc
CFLAGS = -O3 -Wall 

#CXX = g++ -std=c++11
CXX = g++ -std=c++0x
CXXFLAGS = -O3 -Wall 




all: algorithm 

algorithm : algorithm.o
	$(CXX) $(CXXFLAGS) -o algorithm algorithm.o $(LIBS)

algorithm.o: algorithm.cpp
	$(CXX) $(CXXFLAGS) -c algorithm.cpp

