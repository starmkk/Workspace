#include <regex>
#include <iostream>

using namespace std;


int main() {
    string str;
    while(true) {
	cin >> str;
	regex e("abc");

	bool match = regex_match(str, e);

	cout << (match ? "Matched:" : "Not matched") << endl; 
    }

    return 0;
}
