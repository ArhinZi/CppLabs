// Lab2.2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Улументи кола пронумеровані в такий спосіб: 1- радіус, 2- діаметр, 3- довжина кола, 4- площа кола. Дано номер одного з елементів і його значення. Вивести значення інших елементів даного кола в тому ж порядку.

#include <iostream>

int main()
{
    double r, d, l, s, val;
    double pi = 3.14;
    int n;
    std::cout << "Input number and value: ";
    std::cin >> n >> val;
    if (n == 1) {
        r = val;
        d = 2 * r;
        l = 2 * pi * r;
        s = pi * r * r;
    }
    else if (n == 2) {
        d = val;
        r = d / 2;
        l = 2 * pi * r;
        s = pi * r * r;
    }
    else if (n == 3) {
        l = val;
        r = l / (2 * pi);
        d = 2 * r;
        s = pi * r * r;
    }
    else if (n == 4) {
        s = val;
        r = sqrt(s/pi);
        l = 2 * pi * r;
        d = 2 * r;
    }
    else {
        std::cout << "ERROR!";
        return 1;
    }

    std::cout << "Results: " << std::endl;
    std::cout << "1- R- " << r << ", " << std::endl;
    std::cout << "2- D- " << d << ", " << std::endl;
    std::cout << "3- L- " << l << ", " << std::endl;
    std::cout << "4- S- " << s << "." << std::endl;
    
}