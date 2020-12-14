﻿// Lab11.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дана матриця розміру M × N. Заповнити її випадковими числами з діапазону від 0 до 10. Перший раз вивести елементи матриці у звичайному порядку (по рядкам). Другий раз вивести елементи матриці в наступному порядку: перший рядок зліва направо, другий рядок справа наліво, третій рядок зліва направо, четвертий рядок справа наліво і т. д.

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    const int N = 5, M = 5;
    int matr[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matr[i][j] = rand()%10;
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << matr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i%2==1)
                std::cout << matr[i][N-j-1] << " ";
            else
                std::cout << matr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
}