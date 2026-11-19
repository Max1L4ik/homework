#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    double a = 10, b = 5, total = 15;
    double* number1, * number2, *allTotal;

    number1 = &a;
    number2 = &b;
    allTotal = &total;

    *number1 += 4;

    *allTotal = *number1 + *number2;
    std::cout << "Сумма перменных: " << *allTotal << std::endl;

    double temp = *number1;
    *number1 = *number2;
    *number2 = temp;

    std::cout << "Новое значение первой переменной: " << *number1 << std::endl;
    std::cout << "Новое значение второй переменной: " << *number2 << std::endl;
    std::cout << "Новое значение третьей переменной: " << *allTotal << std::endl;

    int value1 = 10, value2 = 20;
    float f = 36.6;
    int* ptr1, *ptr2;
    ptr1 = &value1;
    ptr2 = &value2;
    value2 = *ptr1;
}