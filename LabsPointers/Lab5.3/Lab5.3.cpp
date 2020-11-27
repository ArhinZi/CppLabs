// Lab5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Напишіть програму, в якій створюються три об'єкти дійсного типу середній бал студента у вільній пам'яті; введіть їх значення з консолі; знайдіть об’єм виділеної пам’яті; роздрукуйте значення середнього балу кожного студента. Увага! Після виведення обов’язково звільніть пам’ять від об’єктів.

#include <iostream>

int main()
{
    int *AvgMark1 = new int;
    int* AvgMark2 = new int;
    int* AvgMark3 = new int;

    std::cout << "Input Mark1: ";
    std::cin >> *AvgMark1;
    std::cout << "Input Mark2: ";
    std::cin >> *AvgMark2;
    std::cout << "Input Mark3: ";
    std::cin >> *AvgMark3;

    std::cout << "SummMemory: " << sizeof(int)*3 << " bytes" << std::endl;

    std::cout << "Value Mark1 = " << *AvgMark1 << std::endl;
    std::cout << "Value Mark2 = " << *AvgMark2 << std::endl;
    std::cout << "Value Mark3 = " << *AvgMark3 << std::endl;

    delete AvgMark1;
    delete AvgMark2;
    delete AvgMark3;
}
