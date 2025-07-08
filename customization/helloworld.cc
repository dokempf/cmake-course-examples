#include <iostream>

int main() {
    std::cout << "Hello World!";
    
#ifdef POSITIVE
    std::cout << " It is nice to be here.";
#endif

    std::cout << std::endl;

    return 0;
}
