// Lab4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Описати рекурсивну функцію Fact (N) дійсного типу, яка обчислює значення факторіала

#include <iostream>

double Fact(int N);

int main()
{
    int n;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input N: ";
        std::cin >> n;
        std::cout << "Fact(" << n << ") = " << Fact(n)<<std::endl;
    }
}


double Fact(int N) {
    if (N < 0) {
        return 0;
    }
    else if (N == 0) {
        return 1;
    }
    else {
        return (N * Fact(N - 1));
    }
}