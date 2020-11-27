// Lab2.4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дано ціле число N (>0). Вивести всі його цифри, починаючи з самої правої(з одиниць)

#include <iostream>

int main()
{
    unsigned int n;
    std::cout << "Input N: ";
    std::cin >> n;
    std::cout << "Digits: ";
    while (n != 0)
    {
        std::cout << n % 10 << " ";
        n = n / 10;
    }
}