#include <boost/regex.hpp>
#include <iostream>

void print_captures(const std::string& regx, const std::string& text)
{
    boost::regex e(regx);
    boost::smatch what;

    std::cout << "Expression: 	\"" << regx << "\"\n";
    std::cout << "Text:		\"" << text << "\n\n";

    if(boost::regex_match(text, what, e, boost::match_extra))
    {

    }
    else
    {
	std::cout << "** No Match found **\n";
    }

}

int main(int argc, char**argv)
{
    print_captures("(([[:lower:]]+)|([[:upper:]]+))+", "aBBcccDDDDDeeeeeeeeee");

    return 0;
}

