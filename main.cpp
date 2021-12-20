#include <iostream>

#include <boost/filesystem.hpp>

class path : public boost::filesystem::path
{
    using boost::filesystem::path::path;
};

int main()
{
    path p1("foo/");
    path p2("bar");
    
    // This fails to compile
    p1 += p2;
    
    // This works, but not with older boost
    // p1.concat(p2);
    
    std::cout << p1;
}
