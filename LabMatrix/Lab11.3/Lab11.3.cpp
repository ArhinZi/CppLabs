// Lab11.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дана матриця розміру M × N. Поміняти місцями стовпці, що містять мінімальну і максимальну суму елементів.

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
        {7,6,5,7,3}
        //20 21 27 23 25
    };

    int min_index = -1;
    int min_value = 0;
    int max_index = -1;
    int max_value = 0;
    for (int i = 0; i < N; i++)
    {
        int summ = 0;
        for (int j = 0; j < M; j++)
        {
            summ += matr[j][i];
        }
        if (min_index == -1 && max_index == -1) {
            min_index = i;
            min_value = summ;
            max_index = i;
            max_value = summ;
        }
        else {
            if (min_value > summ) {
                min_index = i;
                min_value = summ;
            }
            if (max_value < summ) {
                max_index = i;
                max_value = summ;
            }
        }

    }

    for (int i = 0; i < M; i++)
    {
        int tmp = matr[i][max_index];
        matr[i][max_index] = matr[i][min_index];
        matr[i][min_index] = tmp;
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
}
