// Lab11.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Дана квадратна матриця порядку M. 
// 1)Знайти максимальний елемент для кожної її діагоналі, паралельної побічній(починаючи з одноелементної діагоналі A1, 1).
// 2) Обнулити елементи матриці, що лежать одночасно нижче головної діагоналі(включаючи цю діагональ) і нижче побічної діагоналі(також включаючи цю діагональ).Умовний оператор не використовувати.


#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    const int M = 5;
    int K = (5 - 1) * 2;
    int matr[M][M]{
        {1,2,3,4,5},
        {4,2,6,2,4},
        {5,6,7,3,5},
        {3,5,6,7,8},
        {7,6,5,4,3}
    };

    int max_val = 0;

    for (int i = 0; i < M - 1; i++) {
        int j = i;
        int k = 0;
        while (j >= 0 && k < M) {
            if (j == i) {
                max_val = matr[j][k];
            }
            else {
                if (matr[j][k] > max_val) max_val = matr[j][k];
            }
            j--;
            k++;
        }
        printf_s("Max val for diag #%i: %i\n", i, max_val);
    }
    for (int i = 1; i < M; i++) {
        int j = M-1;
        int k = i;
        while (j >= 0 && k < M) {
            if (k == i) {
                max_val = matr[j][k];
            }
            else {
                if (matr[j][k] > max_val) max_val = matr[j][k];
            }
            j--;
            k++;
        }
        printf_s("Max val for diag #%i: %i\n", (M-1)+i, max_val);
    }

    for (int k = 0; k < (M / 2)+1; k++)
    {
        int i = M - k -1;
        for (int j = 0; j < M-(k*2); j++)
        {
            matr[i][k+j] = 0;
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << matr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
