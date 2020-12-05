// Lab6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Створіть: прототип функції для обчислення квадрата, куба і зворотного значення дійсного числа (функція не повертає результат, передача параметрів за посиланням); реалізацію цієї функції. За допомогою функції обчисліть квадрат, куб і зворотне значення чотирьох чисел.

#include <iostream>

void PowRev(float num, float& pow2, float& pow3, float& rev);

int main()
{
    float num, pow2, pow3, rev;
    std::cout << "Input num: ";
    std::cin >> num;
    PowRev(num, pow2, pow3, rev);
    std::cout << "Pow2 = " << pow2 << std::endl;
    std::cout << "Pow3 = " << pow3 << std::endl;
    std::cout << "Rev = " << rev << std::endl;
}

void PowRev(float num, float& pow2, float& pow3, float& rev) {
    pow2 = num * num;
    pow3 = num * num * num;
    rev = 1 / num;
}
