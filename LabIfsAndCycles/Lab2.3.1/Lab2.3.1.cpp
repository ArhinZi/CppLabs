// Lab2.3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дано дійсне число N (>0). Знайти суму 1+1/2+1/3+...+1/N Дійсне число

#include <iostream>

int main()
{
    unsigned int n;
    double res = 0;
    std::cout << "Input N: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res += (1. / i);
    }
    std::cout << "Result: " << res<<std::endl;
}