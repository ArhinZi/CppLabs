// Lab3.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Описати функцію PowerA3 (A, B), яка обчислює третю степінь числа A і повертає її в змінній B (A - вхідний, B - вихідний параметр; обидва параметри є дійсними). За допомогою цієї функції знайти треті ступені п'яти даних чисел.

#include <iostream>


void PowerA3(double A, double& B);

int main()
{
    double inp;
    double res;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input number: ";
        std::cin >> inp;
        PowerA3(inp, res);
        std::cout << inp << "^3= " << res << std::endl;
    }
}

void PowerA3(double A, double& B) {
    B = pow(A, 3);
}