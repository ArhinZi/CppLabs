﻿// Lab1.4.10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дано числа x , y , x 1 , y 1 , x 2 , y 2 . Перевірити істинність висловлювання: «Точка з координатами ( x , y ) лежить усередині прямокутника, ліва верхня вершина якого має координати ( x 1 , y 1 ), права нижня - ( x 2 , y 2 ), а сторони паралельні координатним осям». 

#include <iostream>

int main()
{
    int x, y, x1, y1, x2, y2;
    std::cout << "Input x y x1 y1 x2 y2: ";
    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    if (x1 <= x && x <= x2 && y2 <= y && y <= y1)
        std::cout << "Dot is inside the rect";
    else
        std::cout << "Dot is outside the rect";
}
