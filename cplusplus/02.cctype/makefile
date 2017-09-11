LDFLAGS=
LIBS=

CC = gcc
CFLAGS = -O3 -Wall 

#CXX = g++ -std=c++11
CXX = g++ -std=c++0x
CXXFLAGS = -O3 -Wall 




all: isalnum  isalpha iscntrl setlocale array


isalnum : isalnum.o 
	$(CXX) $(CXXFLAGS) -o isalnum isalnum.o $(LIBS)


isalnum.o : isalnum.cpp
	$(CXX) $(CXXFLAGS) -c isalnum.cpp


isalpha : isalpha.o
	$(CXX) $(CXXFLAGS) -o isalpha isalpha.o $(LIBS)


isalpha.o : isalpha.cpp
	$(CXX) $(CXXFLAGS) -c isalpha.cpp


iscntrl : iscntrl.o
	$(CXX) $(CXXFLAGS) -o iscntrl iscntrl.o $(LIBS)


iscntrl.o : iscntrl.cpp
	$(CXX) $(CXXFLAGS) -c iscntrl.cpp


setlocale : setlocale.o
	$(CXX) $(CXXFLAGS) -o setlocale setlocale.o $(LIBS)

setlocale.o : setlocale.cpp
	$(CXX) $(CXXFLAGS) -c setlocale.cpp

array : array.o
	$(CXX) $(CXXFLAGS) -o array array.o $(LIBS)

array.o : array.cpp
	$(CXX) $(CXXFLAGS) -c array.cpp
