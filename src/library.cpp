#include "library.h"
#include <iostream>

namespace library{
    int add(int a, int b) {
        int result = a + b;
        std::cout << result << std::endl;
        return result;
    }

    int main(){
        add(1,2);

        return 0;
    };
}

