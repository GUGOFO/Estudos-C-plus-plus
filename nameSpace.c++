#include <iostream>

namespace primeira{
    int x = 1;
    int y = 0;
}

namespace segunda{
    int y = 1;
}


int main(){

    using namespace segunda;

    int x = 0;

    std::cout << primeira::x << '\n';
    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}