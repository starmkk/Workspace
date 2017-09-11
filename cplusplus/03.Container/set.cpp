#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
#include <string.h>

struct ltstr
{
    bool operator() (const char* s1, const char* s2) const
    {
	return strcmp(s1, s2) < 0;
    }
};

int main() 
{
    const int N =6;
    const char* a[N] = {"isomer", "ephemeral", "prosaic",
			"nugatory", "artichoke", "serif"};
    const char* b[N] = {"flat", "this", "artichoke",
			"frigate", "prosaic", "isomer"};

    std::set<const char*, ltstr> A(a, a + N);
    std::set<const char*, ltstr> B(b, b + N);
    std::set<const char*, ltstr> C;

    std::cout << "Set A: " ;
    std::copy(A.begin(), A.end(), std::ostream_iterator<const char*>(std::cout, " "));
    std::cout << std::endl;
    std::cout << "Set B: ";
    std::copy(B.begin(), B.end(), std::ostream_iterator<const char*>(std::cout, " "));

    std::cout << std::endl;

    std::cout <<"Union:";
    set_union(A.begin(), A.end(), B.begin(), B.end(),
	    std::ostream_iterator<const char*>(std::cout, " "),
	    ltstr());
    std::cout << std::endl;

    std::cout << "Intersection: ";
    set_intersection(A.begin(), A.end(), B.begin(), B.end(),
	    std::ostream_iterator<const char*>(std::cout, " "),
	    ltstr());
    std::cout << std::endl;

    set_difference(A.begin(), A.end(), B.begin(), B.end(),
	    inserter(C, C.begin()),
	    ltstr());

    std::cout << "Set C (difference of A and B) : ";
    std::copy(C.begin(), C.end(), std::ostream_iterator<const char *>(std::cout, " "));
    std::cout << std::endl;
}

