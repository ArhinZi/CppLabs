// Lab5.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Опишіть функцію Power23(N, N2, N3) для пошуку квадрату і куба даного цілого числа   N, яка не повертає результат. Увага! Передачу параметрів N2 і N3 забезпечити за вказівкою. За допомогою функції Power23(N, N2, N3) знайти і вивести квадрати і куби п’яти цілих чисел.


#include <iostream>

void Power23(int N, int* N2, int* N3);

int main()
{
    int n;
    int* n2 = new int;
    int* n3 = new int;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input n: ";
        std::cin >> n;
        Power23(n, n2, n3);
        printf("N^2 = %d, N^3 = %d \n", *n2, *n3);
    }
    delete n2;
    delete n3;
}

void Power23(int N, int* N2, int* N3) {
    *N2 = pow(N, 2);
    *N3 = pow(N, 3);
}