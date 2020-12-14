// Lab11.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дана матриця розміру M × N. Знайти кількість її рядків, елементи яких впорядковані за зростанням.

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    const int N = 5, M = 5;
    int matr[M][N]{
        {1,2,3,4,5},
        {4,2,6,2,4},
        {5,6,7,3,5},
        {3,5,6,7,8},
        {7,6,5,4,3}
    };

    int rising_count = 0;
    for (int i = 0; i < M; i++)
    {
        bool is_rising = true;
        for (int j = 1; j < N; j++)
        {
            if (matr[i][j] < matr[i][j - 1]) {
                is_rising = false;
                break;
            }
        }
        if (is_rising) rising_count++;
    }
    std::cout << "Rising lines: " << rising_count << std::endl;
}
