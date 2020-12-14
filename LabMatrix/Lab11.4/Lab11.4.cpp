// Lab11.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дана матриця розміру M × N. Впорядкувати її стовпці так, щоб їх перші елементи утворювали зростаючу послідовність.

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
    bool b = true;
    while (b) {
        b = false;
        for (int i = 1; i < M; i++)
        {
            if(matr[i-1][0] > matr[i][0]){
                b = true;
                for (int j = 0; j < N; j++) {
                    int tmp = matr[i - 1][j];
                    matr[i - 1][j] = matr[i][j];
                    matr[i][j] = tmp;
                }
            }
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
}
