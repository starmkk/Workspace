#include <boost/regex.hpp>
#include <string>
#include <iostream>


int main()
{
    std::string s = "Boost Libraries";
    boost::regex expr{"\\w+\\s\\w+"};
    
    std::cout << std::boolalpha << boost::regex_match(s, expr) << std::endl;
/*
    boost::match_results<std::string::const_iterator> what;
    
    if(boost::regex_match(s, what, expr)) 
    {
      unsigned i, j;
      std::cout << "** Match found **\n Sub-Expressions:\n";

      for(i=0; i<what.size(); ++i)
      	std::cout << "     $" << i << " = \"" << what[i] << "\"\n";

      std::cout << "    Captures:\n";

      for(i=0; i< what.size(); ++i)
      {
         std::cout << "      $" << i << " = {";
	 for(j=0; j< what.captures(i).size(); ++j)
	 {
	     if(j)
	        std::cout << ", ";
	     else
	       std::cout << " ";
	     std::cout << "\"" << what.captures(i)[j] << "\"";
	 }

	 std::cout << " }\n";
       }

    }

*/
    return 0;
}


