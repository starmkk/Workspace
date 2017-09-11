#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>



//default initialization(non-local = static storage);
std::array<int, 3> global;  //zero-initialized: {0, 0, 0}

int main()
{
  //default initialization (local = automatic storage):


  std::array<int, 3> first;   				//uninitialized {?, ?, ?}
  std::array<int, 3> second = {10, 20};			//initialized as: {10,20,0}
  std::array<int, 3> third = {1,2,3};			//initialized as: {1,2,3}

  //copy initialization
  std::array<int, 3> fourth = third;			//copy: { 1,2,3}

  std::cout << "The contents of fourth are: ";
  for(auto x:fourth) std::cout<< ' ' << x;
  std::cout << '\n';

 


  std::copy(fourth.begin(), fourth.end(), std::ostream_iterator<int>(std::cout, "n"));
  return 0;
}


