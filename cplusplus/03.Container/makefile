LDFLAGS=
LIBS=

CC = gcc
CFLAGS = -O3 -Wall 

#CXX = g++ -std=c++11
CXX = g++ -std=c++0x
CXXFLAGS = -O3 -Wall 




all: deque key_comp key_comp2  priority_queue  set

set : set.o
	$(CXX) $(CXXFLAGS) -o set set.o $(LIBS)

set.o: set.cpp
	$(CXX) $(CXXFLAGS) -c set.cpp

priority_queue : priority_queue.o
	$(CXX) $(CXXFLAGS) -o priority_queue priority_queue.o $(LIBS)

priority_queue.o: priority_queue.cpp
	$(CXX) $(CXXFLAGS) -c priority_queue.cpp

key_comp : key_comp.o
	$(CXX) $(CXXFLAGS) -o key_comp key_comp.o $(LIBS)

key_comp.o : key_comp.cpp 
	$(CXX) $(CXXFLAGS) -c key_comp.cpp


key_comp2 : key_comp2.o
	$(CXX) $(CXXFLAGS) -o key_comp2 key_comp2.o $(LIBS)

key_comp2.o : key_comp2.cpp 
	$(CXX) $(CXXFLAGS) -c key_comp2.cpp

deque : deque.o 
	$(CXX) $(CXXFLAGS) -o deque deque.o $(LIBS)


deque.o : deque.cpp
	$(CXX) $(CXXFLAGS) -c deque.cpp
