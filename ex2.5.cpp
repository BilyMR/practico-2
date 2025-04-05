#include <iostream>

int main()
{
    char a;
    std::cin>>a;
    
    if(a >= 65 && a <= 90){
        std::cout<<"MAYUSCULA";
    } else if (a >= 97 && a <= 122){
        std::cout<<"minuscula";
    } else {
        std::cout<<"not a letter";
    }

    return 0;
}
