#include <iostream>
int main() {
    int    age = 25;
    double height = 1.82;
    char   grade = 'A';
    int* p_age = &age;
    double* p_height = &height;
    char* p_grade = &grade;
    std::cout << "Size of int    variable: " << sizeof(age) << " bytes\n";
    std::cout << "Size of double variable: " << sizeof(height) << " bytes\n";
    std::cout << "Size of char   variable: " << sizeof(grade) << " bytes\n";
    std::cout << "Size of int    pointer: " << sizeof(p_age) << " bytes\n";
    std::cout << "Size of double pointer: " << sizeof(p_height) << " bytes\n";
    std::cout << "Size of char   pointer: " << sizeof(p_grade) << " bytes\n";
    return 0;
}