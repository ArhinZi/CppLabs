﻿// Lab5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Напишіть програму, яка створює витік пам'яті. Збільшіть швидкість витоку пам'яті за допомогою створення об'єктів більшого розміру. Поясніть як виправити програму.

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
	long long int* p;
	while (true)
	{
		p = new long long int;

		//delete p; //раскомментировать для ликвидации утечки памяти
	}
}
