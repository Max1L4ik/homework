#include <iostream>
int main() {
    int a = 3;
    int b = 7;
    int c = 15;
    int *p;
    p = &a;
    std::cout << "Pointer points to a: address = " << (void*)p << ", old value = " << *p << "\n";
    *p = *p * 2;
    p = &b;
    std::cout << "Pointer points to b: address = " << (void*)p << ", old value = " << *p << "\n";
    *p = *p * 2;
    p = &c;
    std::cout << "Pointer points to c: address = " << (void*)p << ", old value = " << *p << "\n";
    *p = *p * 2;
    std::cout << "\nFinal values:\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    return 0;
}