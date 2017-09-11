#include <iostream>
#include <map>
#include <string.h>

struct ltstr
{
    bool operator()(const char* s1, const char*s2) const
    {
	return strcmp(s1, s2) <0;
    }
};

int main()
{
    std::map<const char*, int, ltstr> days;
    //std::map<const char*, int> days;

    days["january"] = 31;
    days["february"] = 28;
    days["march"] = 31;
    days["april"] = 30;
    days["may"] = 31;
    days["june"] = 30;
    days["july"] = 31;
    days["august"] = 31;
    days["september"] = 30;
    days["october"] = 31;
    days["november"] = 30;
    days["december"] = 31;
    
    std::cout << "june -> " << days["june"] << std::endl;
    std::map<const char*, int, ltstr>::iterator cur = days.find("june");
    std::map<const char*, int, ltstr>::iterator prev = cur;
    std::map<const char*, int, ltstr>::iterator next = cur;

    //std::map<const char*, int>::iterator cur = days.find("june");
    //std::map<const char*, int>::iterator prev = cur;
    //std::map<const char*, int>::iterator next = cur;

    ++next;
    --prev;

    std::cout <<"Previous (in alphabetical order) is "
	<< (*prev).first << std::endl;
    std::cout << "Next (in alphabetical order ) is "
	<< (*next).first << std::endl;
	
    std::map<const char*, int, ltstr>::key_compare mycomp = days.key_comp();
    //std::map<const char*, int>::key_compare mycomp = days.key_comp();
    const char* highest = days.rbegin()->first;
 
    std::map<const char*, int, ltstr>::iterator iter = days.begin();
    //std::map<const char*, int>::iterator iter = days.begin();

    do {
	std::cout << iter->first << " = > " << iter->second << "\n";
    } while ( mycomp((*iter++).first, highest) );

    std::cout << "============================ " <<std::endl;

    iter = days.begin();

    for( ;iter != days.end(); iter++)
    {
	std::cout <<(*iter).first << " = > " << (*iter).second << "\n";
    }

    return 0;
}

