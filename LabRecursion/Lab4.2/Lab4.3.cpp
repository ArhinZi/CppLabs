// Lab4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// 3.	Описати рекурсивну функцію PowerN (X, N) дійсного типу, яка знаходить значення N-го степеня числа X за формулами:
// X 0 = 1,
// X N = (X N / 2) 2 при парних N > 0,
// X N = X · X N - 1 при непарних N > 0,
// X N = 1 / X - N при N < 0
//     (X ≠ 0 - */дійсне число, N - ціле; у формулі для парних N повинна використовуватися операція цілочисельного ділення).За допомогою цієї функції знайти значення X N для даного X при п'яти даних значеннях N.


#include <iostream>

double PowerN(double X, int N);

int main()
{
    int n;
    double x;
    std::cout << "Input X: ";
    std::cin >> x;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input N: ";
        std::cin >> n;
        std::cout << "PowerN(" << x << ", " << n << ") = " << PowerN(x, n) << std::endl;
    }
}

double PowerN(double X, int N) {
    if (N == 0) return 1;
    else {
        if (N % 2 == 0 && N > 0) {
            return pow(PowerN(X, N / 2), 2);
        }
        else if (N % 2 != 0 && N > 0) {
            return (X * PowerN(X, N - 1));
        }
        else if (N < 0) {
            return (1 / PowerN(X, -1 * N));
        }
    }
}