LDFLAGS=
LIBS=

CC = gcc
CFLAGS = -O3 -Wall 

CXX = g++
#CXX = g++ -std=c++11
#CXX = g++ -std=c++0x
CXXFLAGS = -O3 -Wall 

#INCLUDEDIRS = -I ../../../boost/boost_1_64_0_POXIS 
INCLUDEDIRS = -I /cygdrive/c/work/boost/boost_1_64_0_POXIS


all: boost_split boost_first 

boost_first: boost_first.o
	$(CXX) $(CXXFLAGS) -o boost_first boost_first.o

boost_first.o: boost_first.cpp
	$(CXX) $(INCLUDEDIRS) $(CXXFLAGS) -c boost_first.cpp

boost_split: boost_split.o
	$(CXX) $(CXXFLAGS) -o boost_split boost_split.o

boost_split.o: boost_split.cpp
	$(CXX) $(INCLUDEDIRS) $(CXXFLAGS) -c boost_split.cpp



