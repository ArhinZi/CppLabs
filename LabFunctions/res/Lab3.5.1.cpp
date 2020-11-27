// Lab3.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

double Calc(double A, double B, unsigned int Op);

int main()
{
    double a, b;
    unsigned int n1, n2, n3;
    std::cout << "Input A B: ";
    std::cin >> a >> b;
    std::cout << "Input N1 N2 N3: ";
    std::cin >> n1 >> n2 >> n3;

    std::cout << "Calc(A,B,N1) = " << Calc(a, b, n1) << std::endl;
    std::cout << "Calc(A,B,N2) = " << Calc(a, b, n2) << std::endl;
    std::cout << "Calc(A,B,N3) = " << Calc(a, b, n3) << std::endl;

}

double Calc(double A, double B, unsigned int Op) {
    if (Op == 1) {
        return (A - B);
    }
    else if (Op == 2) {
        return (A * B);
    }
    else if (Op == 3) {
        return (A / B);
    }
    else {
        return (A + B);
    }
}