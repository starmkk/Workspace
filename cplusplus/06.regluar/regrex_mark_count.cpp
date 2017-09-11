#include <iostream>
#include <regex>

int main()
{ 
    std::regex myregex("(sub)([a-z]*).*");
    std::cout << "The pattern captures " << myregex.mark_count() << " sub-expressions.\n";

    std::cmatch m;
    regex_match("subject", m, myregex);

    std::cout << "m.size: " << m.size() << std::endl;

    if(m.size() == myregex.mark_count() + 1) {
	std::cout << "Ok, all sub-expressions captured.\n";
	std::cout << "Matched expression: " << m[0] << std::endl;

	for(unsigned i=1; i<m.size(); ++i)
	    std::cout << "Sub-expression " << i << ": " << m[i] << "\n";
    }

    return 0;
}
