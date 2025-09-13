#include <iostream>

int Policz(int a , int b) {
    return (a+b)*(a-b) + 1 ;
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W brancuchu 3 ;  (2+3)*(2-3)+1=" << Policz(2,3) << std::endl;
    return 0;
}
