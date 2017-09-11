#include <iostream>
#include <map>

int main()
{
    std::map<char, int> mymap;
    std::map<char, int>::key_compare mycomp = mymap.key_comp();

    mymap['a']=200;
    mymap['b']=800;
    mymap['c']=300;

    std::cout << "mymap contains:\n";

    char highest = mymap.rbegin()->first; //key value of last element

    std::map<char, int>::iterator it = mymap.begin();

    do {
	    std::cout << it->first << " => " <<it->second << "\n";
    } while(mycomp((*it++).first, highest) );

    std::cout << "\n";

    return 0;
}

