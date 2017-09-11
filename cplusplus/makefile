LDFLAGS=
LIBS=

CC = gcc
CCDEPMODE = depmode=none
CFLAGS = -O3 -Wall 

CPP = gcc -E
CPPFLAGS = 
CXX = g++
CXXCPP = g++ -E
CXXFLAGS = -O3 -Wall 


all: assert

assert: assert.o
	$(CXX) $(CXXFLAGS) -o assert assert.o $(LIBS)


assert.o: assert.cpp
	$(CXX) $(CXXFLAGS) -c assert.cpp
