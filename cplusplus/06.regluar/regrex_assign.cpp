#include <iostream>
#include <string>
#include <regex>


int main() 
{
    std::regex pattern("six");
    //std::string pattern("(^six|six$)");
    //std::string pattern("six");

    std::regex first;
    std::regex second(pattern);

    first.assign(second);
    second.assign("[0-9A-F]+", std::regex::ECMAScript);
    second.assign({'^','a'}, std::regex::ECMAScript | std::regex::icase);

    using namespace std::regex_constants;
    second.assign(pattern, ECMAScript | icase);

    std::string subject = "Sixty six";
    std::string replacement = "seven";

    std::cout << "first: " << std::regex_replace(subject, first, replacement);
    std::cout << "\tmark_count(): "<< first.mark_count();
    std::cout << std::endl;

    std::cout << "second: " << std::regex_replace(subject, second, replacement);
    std::cout << "\tmark_count(): " << second.mark_count();
    std::cout << std::endl;

    return 0;
}

