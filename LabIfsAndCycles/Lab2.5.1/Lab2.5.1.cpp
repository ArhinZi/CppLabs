// Lab2.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Вивести таблицю множення від 1 до 9

#include <iostream>

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << i * j << std::endl;
		}
		std::cout << std::endl;
	}
}