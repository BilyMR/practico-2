#include <iostream>

int main()
{
    int a, b;
    std::cin>>a>>b;
    
    if(b == 0){
        std::cout<<"Imposible";
    } else {
        int c = a / b;
        std::cout<<c;
    }
    return 0;
}
