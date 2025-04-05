#include <iostream>

int main()
{
    int a = 51;
    int b = 876;
    int c = 235;
    
    std::cout<<"Los valores son: a ="<< a <<" b = "<< b<<" y c = "<< c<<std::endl;
    std::cout<<"Permutamos: a ==>b, b ==>c, c ==> a"<<std::endl;

    int temp1 = a;
    int temp2 = b;
    a = c;
    b = temp1;
    c = temp2;
    
    std::cout<<"Los valores despues de la permutación son: a ="<< a <<" b = "<< b<<" y c = "<< c<<std::endl;
    

    return 0;
}
