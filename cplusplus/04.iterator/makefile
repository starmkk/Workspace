LDFLAGS=
LIBS=

CC = gcc
CFLAGS = -O3 -Wall 

#CXX = g++ -std=c++11
CXX = g++ -std=c++0x
CXXFLAGS = -O3 -Wall 




all: line_iterator

line_iterator : line_iterator.o
	$(CXX) $(CXXFLAGS) -o line_iterator line_iterator.o $(LIBS)

line_iterator.o: line_iterator.cpp
	$(CXX) $(CXXFLAGS) -c line_iterator.cpp

