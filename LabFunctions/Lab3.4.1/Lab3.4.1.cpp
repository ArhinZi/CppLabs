// Lab3.4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Описати функцію Power1 (A, B) дійсного типу, яка знаходить величину AB за формулою AB = exp (B · ln (A)) (параметри A і B - дійсні). У разі нульового або негативного параметра A функція повертає 0. З допомогою цієї функції знайти степені AP, BP, CP, якщо дано числа P, A, B, C.

#include <iostream>

double Power1(double A, double B);

int main()
{
    double p,a,b,c;
    std::cout << "Input P A B C: ";
    std::cin >> p >> a >> b >> c;
    std::cout << "A^P = " << Power1(a, p) << std::endl;
    std::cout << "B^P = " << Power1(b, p) << std::endl;
    std::cout << "C^P = " << Power1(c, p) << std::endl;

}

double Power1(double A, double B) {
    double res = 0;
    if (A <= 0) return res;
    else {
        res = exp(B * log(A));
        return res;
    }
}