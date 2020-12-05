// Lab6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Створіть: прототип функції для обчислення довжини кола, площі кола і об’єму кулі, якщо відомий радіус (функція не повертає результат, передача параметрів за посиланням); реалізацію цієї функції. За допомогою функції обчисліть довжину кола, площу кола і об’єм кулі за трьома даними радіусами.

#include <iostream>

void Circler(float r, float& l, float& s, float& v);

int main()
{
    float R, L, S, V;
    std::cout << "Input R: ";
    std::cin >> R;
    Circler(R, L, S, V);
    std::cout << "L=" << L<<std::endl;
    std::cout << "S=" << S << std::endl;
    std::cout << "V=" << V << std::endl;
}

void Circler(float r, float& l, float& s, float& v) {
    l = 2 * 3.14 * r;
    s = 3.14 * r * r;
    v = (4. / 3.) * 3.14 * r * r * r;
}