#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cin>> a >> b >> c;
    
    float operation1 = ((-b)+sqrt((b*b)-4*a*c))/(2*a);
    float operation2 = ((-b)-sqrt((b*b)-4*a*c))/(2*a);
    
    std::cout<<operation1<<" "<<operation2;

    return 0;
}
