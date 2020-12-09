// Lab8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Напишіть код для оголошення класу "Студент" з такими відкритими членами-даними: вік, стать, стипендія. Напишіть програму, в якій створюються два об'єкти типу "Студент" . Встановіть їх вік, стать і стипендію. Роздрукуйте значення членів-даних об'єктів на екрані.

#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
    unsigned int age;
    string gender;
    unsigned int scholarship;
};

int main()
{
    Student a = Student();
    a.age = 20;
    a.gender = "unknown";
    a.scholarship = 1000;
    Student b = Student();
    b.age = 25;
    b.gender = "male";
    b.scholarship = 1200;

    printf_s("Student:\n\tage=%i\n\tgender=%s\n\tscholarship=%i\n", a.age, a.gender.c_str(), a.scholarship);
    printf_s("Student:\n\tage=%i\n\tgender=%s\n\tscholarship=%i\n", b.age, b.gender.c_str(), b.scholarship);
}
