#include <iostream>
#include "library.h"


int main(){
    int a = 10;
    int b = 5;

    std::cout << "\n";

    std::cout << "Variables: a = " << a << " , b = " << b << std::endl;
    std::cout << "Sum Operator: a + b = " << library::add(a,b) << std::endl;

    std::cout << "Modulo Operator: a %% b = " << library::modulo(a,b) << std::endl;
    
    return 0;
}

