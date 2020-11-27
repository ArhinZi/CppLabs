// Lab1.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дано цілі числа a , b , c , що є сторонами деякого трикутника. Перевірити істинність висловлювання: «Трикутник зі сторонами a , b , c є рівностороннім».       

#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Input a b c: ";
    std::cin >> a >> b >> c;
    if(a == b == c)
        std::cout << "Triangle is equilateral" << std::endl;
    else
        std::cout << "Triangle is not equilateral" << std::endl;
}
