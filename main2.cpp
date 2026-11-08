#include <iostream>

int powerNumb(int a, int b){
    int res = 1;
    for (int i = 0; i < b; i ++){
        res *= a;
    }
    return res;
}

int main(int argc, char** argv)
{
    int value{ 5 }, power{ 2 };
    std::cout << value << " to the power of " << power << " = " << powerNumb(value, power) << std::endl;
    value = 3;
    power = 3;
    std::cout << value << " to the power of " << power << " = " << powerNumb(value, power) << std::endl;
    value = 4;
    power = 4;
    std::cout << value << " to the power of " << power << " = " << powerNumb(value, power) << std::endl;
    return 0;
}
