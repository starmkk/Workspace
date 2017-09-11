LIBS= -lboost_regex
LDFLAGS= -L/usr/local/lib

CXX = g++ -pg -fprofile-arcs -ftest-coverage -std=c++11
CXXFLAGS = -c -O3 -Wall -I/usr/local/include 


all: captures_example

captures_example: captures_example.o
	$(CXX) $(LDFLAGS) -o captures_example captures_example.o $(LIBS)

captures_example.o: captures_example.cpp
	$(CXX) $(CXXFLAGS) -c captures_example.cpp

gprof: 
	gprof -b -l captures_example.exe > catures_example.gp
