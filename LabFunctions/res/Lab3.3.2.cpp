// Lab3.3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

unsigned int DigitCount(unsigned int k);

int main()
{
    unsigned int inp;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input number: ";
        std::cin >> inp;
        std::cout << "DigitCount(number) = " << DigitCount(inp) << std::endl;
    }
}

unsigned int DigitCount(unsigned int k) {
    unsigned int i = 1;
    while (k>9)
    {
        k = k / 10;
        i++;
    }
    return i;
}