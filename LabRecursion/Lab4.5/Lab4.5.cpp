// Lab4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Описати рекурсивну функцію Combin1 (N, K) цілого типу, яка знаходить C (N, K) - число поєднань з N елементів по K - за допомогою рекурентного співвідношення:
// C(N, 0) = C(N, N) = 1,
// C(N, K) = C(N - 1, K) + C(N - 1, K - 1) при 0 < K < N.
// Параметри функції - цілі числа; N > 0, 0 ≤ K ≤ N.Дано число N і п'ять різних значень K. Вивести числа C (N, K) разом з кількістю рекурсивних викликів функції Combin1, що необхідні для їх знаходження.


#include <iostream>

int Combin1(unsigned int N, unsigned int K);

int main()
{
    unsigned int n, k;
    std::cout << "Input N: ";
    std::cin >> n;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input K: ";
        std::cin >> k;
        std::cout << "C(" << n << ", " << k << ") = " << Combin1(n, k) << std::endl;
    }
}


int Combin1(unsigned int N, unsigned int K) {
    if (K == 0 || N == K) {
        return 1;
    }
    else if (K < N && K>0) {
        return Combin1(N - 1, K) + Combin1(N - 1, K - 1);
    }
    else return 0;
}