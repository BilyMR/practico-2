#include <iostream>

int main()
{
    float n, a, b, x, y;
    
    std::cin>>n>>a>>b>>x>>y;
    
    float disx = (100 - x) * 0.010;
    float disy = (100 - y) * 0.010;

    if(a > b){
        std::cout<<"a no debe ser mayor a b";
    } else if(n > a && n <= b) {
        std::cout<<n * disx;
    } else if(n > b) {
        std::cout<<n * disy;
    } else {
        std::cout<<n;
    }
    
    return 0;
}
