#include <iostream>

int main()
{
    int s;
    std::cin>>s;
    
    if(s < 0) std::cout<<"Error";
    
    int hora = s / 3600;
    int min = (s % 3600) / 60;
    int seg = s % 60;
    
    std::cout<<hora<< ":" << min <<":"<<seg;

    return 0;
}
