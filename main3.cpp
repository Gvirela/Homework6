#include <iostream>

int fibonachi(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    return fibonachi(n-1) + fibonachi(n-2);
}

int main(int argc, char** argv)
{
    int n{};
    std::cout << "Enter the number: ";
    std::cin >> n;

    std::cout << "Fibonacci numbers: ";

    for (int i = 1; i < n + 1; i++){
        std::cout << fibonachi(i) << " ";
    }


    return 0;
}