// Lab8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Розробіть методи класу, що дозволяють виконувати введення / виведення всіх членів-даних класу "Студент" та перевірте їх в головній програмі. Напишіть кілька конструкторів і деструктор для класу "Студент". Змініть код для оголошення класу "Студент", закривши в ньому члени-дані. Напишіть методи доступу до полів класу "Студент". Напишіть програму, в якій створюються два об'єкти типу "Студент". Встановіть їх вік, стать і стипендію за допомогою методів доступу. Роздрукуйте значення окремих членів-даних об'єктів на екрані, використовуючи методи доступу. Визначте і роздрукуйте середній вік і сумарну стипендію цих двох студентів.

#include <iostream>
#include <string.h>
using namespace std;

class Student {
private:
    unsigned int age;
    string gender;
    unsigned int scholarship;
public:
    Student(){
        this->age = 0;
        this->gender = "unknown";
        this->scholarship = 0;
    }
    Student(unsigned int age, string gender, unsigned int scholarship) {
        this->age = age;
        this->gender = gender;
        this->scholarship = scholarship;
    }
    ~Student()
    {
        cout << "Student was removed"<<endl;
    }
    void input() {
        cout << "Enter student`s age: ";
        cin >> this->age;
        cout << "Enter student`s gender: ";
        cin >> this->gender;
        cout << "Enter student`s scholarship: ";
        cin >> this->scholarship;
    }

    void output() {
        printf_s("Student:\n\tage=%i\n\tgender=%s\n\tscholarship=%i\n", this->age, this->gender.c_str(), this->scholarship);
    }

    void set_age(unsigned int age) {
        this->age = age;
    }
    void set_gender(string gender) {
        this->gender = gender;
    }
    void set_scholarship(unsigned int scholarship) {
        this->scholarship = scholarship;
    }

    unsigned int get_age() {
        return this->age;
    }

    string get_gender() {
        return this->gender;
    }

    unsigned int get_scholarship() {
        return this->scholarship;
    }
};

int main()
{
    Student a = Student();
    a.input();
    a.output();
    Student b = Student();
    b.set_age(25);
    b.set_gender("male");
    b.set_scholarship(100);
    printf_s("Student:\n\tage=%i\n\tgender=%s\n\tscholarship=%i\n", b.get_age(), b.get_gender().c_str(), b.get_scholarship());

    cout << "Avg age = " << (a.get_age() + b.get_age()) / 2 << endl;
    cout << "Summ scholarship = " << (a.get_scholarship() + b.get_scholarship()) << endl;
}