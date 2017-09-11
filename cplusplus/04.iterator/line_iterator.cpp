#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

class line_iterator
{
    std::istream* in;
    std::string line;
    bool is_valid;
    void read() {
	if(*in)
	    getline(*in, line);

	is_valid = (*in) ? true : false;
    }
   
 public:
    typedef std::input_iterator_tag iterator_category;
    typedef std::string value_type;
    typedef ptrdiff_t difference_type;
    typedef const std::string* pointer;
    typedef const std::string& reference;

    line_iterator() : in(&std::cin), is_valid(false) {}
    line_iterator(std::istream& s) : in (&s) { read();}
    reference operator*() const { return line;}
    pointer operator->() const { return &line;}

    line_iterator operator++() {
	read();
	return *this;
    }

    line_iterator operator++(int) {
	line_iterator tmp = *this;
	read();
	return tmp;
    }

    bool operator==(const line_iterator& i) const {
	return (in == i.in && is_valid == i.is_valid) &&
	       (is_valid == false && i.is_valid == false);
    }

    bool operator!=(const line_iterator& i) const {
	return !(*this == i);
    }
};

int main() {
    line_iterator iter(std::cin);
    line_iterator end_of_file;

    std::vector<std::string> V(iter, end_of_file);
    sort(V.begin(), V.end());
    copy(V.begin(), V.end(), std::
	    ostream_iterator<std::string>(std::cout, "n"));
}

