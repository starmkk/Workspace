#include <boost/algorithm/string.hpp>
#include <iostream>

using namespace std;
using namespace boost;

int main() 
{
    string str1(" hello worlld! ");

    to_upper(str1); 	// str1 == " HELLO WORLD! "
    trim(str1);		// str1 == "HELLO WORLD!"

    string str2 =
	to_lower_copy(
		ireplace_first_copy(
		    str1, "hello", "goodby"));

    cout << str2 << endl;

    return 0;
}
