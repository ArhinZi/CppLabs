// Lab4.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Описати рекурсивну функцію GCD (A, B) цілого типу, яка знаходить найбільший спільний дільник (НСД, greatest common divisor) двох цілих позитивних чисел A і B, використовуючи алгоритм Евкліда:
// НСД(A, B) = НСД(B, A mod B), B ≠ 0; НСД(A, 0) = A,
// де «mod» позначає операцію взяття залишку від ділення.За допомогою цієї функції знайти НСД(A, B), НCД(A, C), НCД(A, D), якщо дано числа A, B, C, D.


#include <iostream>

int GCD(unsigned int A, unsigned int B);

int main()
{
    unsigned int a, b, c, d;
    std::cout << "Input A B C D: ";
    std::cin >> a >> b >> c >> d;
    std::cout << "GCD(" << a << ", " << b << ")=" << GCD(a, b) << std::endl;
    std::cout << "GCD(" << a << ", " << c << ")=" << GCD(a, c) << std::endl;
    std::cout << "GCD(" << a << ", " << d << ")=" << GCD(a, d) << std::endl;

}

int GCD(unsigned int A, unsigned int B) {
    if (B == 0) return A;
    else {
        return GCD(B, A % B);
    }
}