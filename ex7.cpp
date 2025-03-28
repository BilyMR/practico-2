#include <iostream>

int main()
{
    std::string a, b, c;
    std::getline(std::cin,a);
    std::getline(std::cin,b);
    std::getline(std::cin,c);
    
    std::cout<< c <<"\n"<< b <<"\n"<< a;

    return 0;
}
