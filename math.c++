#include <iostream>
#include <cmath>

int main(){

    double x = 4;
    double y = 5;
    double z;

    z = std::max(x,y);
    z = std::min(x,y);
    z = pow(x,y);
    z = sqrt(4);
    z = abs(-1);
    z = round(x);
    z = ceil(x);
    z = floor(x);
    

    std::cout << z;

    return 0;
}