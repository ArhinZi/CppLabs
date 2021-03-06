﻿// Lab6.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Створіть у вільній пам’яті три об'єкта цілого типу, присвойте їм відповідно значення 10, 20, 30. Замініть вказівники посиланнями і виконайте обробку цих об’єктів з використанням посилань (збільшіть значення удвічі). Звільніть вільну пам’ять, застосовуючи вказівники.

#include <iostream>

int main()
{
    int* a, * b, * c;
    a = new int(10);
    b = new int(20);
    c = new int(30);

    int& ra = *a;
    int& rb = *b;
    int& rc = *c;

    ra *= 2;
    rb *= 2;
    rc *= 2;

    std::cout << ra << std::endl;
    std::cout << rb << std::endl;
    std::cout << rc << std::endl;

    delete a;
    delete b;
    delete c;
}
