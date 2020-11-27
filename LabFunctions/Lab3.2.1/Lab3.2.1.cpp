// Lab3.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Описати функцію Sign (X) цілого типу, яка повертає для дійсного числа X наступні значення: -1, якщо X <0; 0, якщо X = 0; 1, якщо X> 0. За допомогою цієї функції знайти значення виразу Sign (A) + Sign (B) для даних дійсних чисел A і B.

#include <iostream>

int Sign(double x);

int main()
{
    double a, b;
    std::cout << "Input A B: ";
    std::cin >> a >> b;
    std::cout << "Sign(A) + Sign(B) = " << (Sign(a)+Sign(b));
}

int Sign(double x) {
    if (x < 0) return -1;
    else if (x == 0) return 0;
    else if (x > 0) return 1;
}