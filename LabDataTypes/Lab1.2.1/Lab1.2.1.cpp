// Lab1.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дано двозначне число. Знайти суму і частку його цифр.

#include <iostream>

int main()
{
    int num;
    std::cout << "Input number: ";
    std::cin >> num;
    int num_0 = num % 10;
    int num_1 = num / 10;
    std::cout << "Summ Result ("<< num_1 << " + " << num_0 <<"): " << (num_0 + num_1) << std::endl;
    std::cout << "Div Result (" << num_1 << " / " << num_0 << "): " << ((float)num_1 / num_0) << std::endl;
}
