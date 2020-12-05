// LabReferences.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Створіть об'єкт цілого типу в стеку. Створіть посилання і вказівник на нього. Введіть значення з консолі. Збільшіть значення на 5 за допомогою посилання. Виведіть значення цього об'єкта за допомогою вказівника та посилання.

#include <iostream>

int main()
{
    int obj;
    int* p_obj = &obj;
    int& r_obj = obj;
    std::cout << "Input number: ";
    std::cin >> obj;
    std::cout << "By pointer: " << *p_obj << std::endl;
    std::cout << "By reference: " << r_obj << std::endl;
}
