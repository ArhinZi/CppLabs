// Lab2.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дано три числа. Знайти найменше з них.

#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Input digits a b c: ";
    std::cin >> a >> b >> c;
    if (a <= b && a <= c)
        std::cout << "The smallest digit is " << a << std::endl;
    else if (b <= a && b <= c)
        std::cout << "The smallest digit is " << b << std::endl;
    else
        std::cout << "The smallest digit is " << c << std::endl;
}
