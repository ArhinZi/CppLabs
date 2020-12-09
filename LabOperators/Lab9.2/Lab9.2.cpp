// Lab9.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//

#include <iostream>
#include <string>

using namespace std;

class MyTime {
private:
    unsigned int itsHour;
    unsigned int itsMin;
public:
    MyTime() {
        this->itsHour = 0;
        this->itsMin = 0;
    }
    ~MyTime()
    {
    }
    bool Set(unsigned int hour, unsigned int minutes) {
        if (hour <= 23 && minutes <= 59) {
            this->itsHour = hour;
            this->itsMin = minutes;
            return true;
        }
        else {
            return false;
        }
    }

    unsigned int get_hour() {
        return this->itsHour;
    }
    unsigned int get_min() {
        return this->itsMin;
    }

    void print(string prefix) {
        printf_s("%s Time %i:%i\n", prefix.c_str(), this->itsHour, this->itsMin);
    }

    MyTime operator++() {
        (this->itsMin)++;
        if (this->itsMin == 60) {
            this->itsMin = 0;
            this->itsHour++;
        }
        if (this->itsHour == 24) {
            this->itsHour = 0;
        }
        MyTime temp;
        temp.Set(this->itsHour, this->itsMin);
        return temp;
    }
    MyTime operator++(int) {
        MyTime temp;
        temp.Set(this->itsHour, this->itsMin);

        (this->itsMin)++;
        if (this->itsMin == 60) {
            this->itsMin = 0;
            this->itsHour++;
        }
        if (this->itsHour == 24) {
            this->itsHour = 0;
        }
        return temp;
    }
    MyTime operator+(MyTime time) {
        unsigned int hours = this->itsHour + time.itsHour;
        unsigned int mins = this->itsMin + time.itsMin;
        hours += mins / 60;
        mins = mins % 60;
        hours = hours % 24;
        MyTime temp;
        temp.Set(hours, mins);
        return temp;
    }

    bool operator!=(MyTime time) {
        return (this->itsHour != time.itsHour && this->itsMin != time.itsMin);
    }
    bool operator==(MyTime time) {
        return (this->itsHour == time.itsHour && this->itsMin == time.itsMin);
    }
};

int main()
{
    MyTime a;
    a.Set(1, 10);
    a.print("A");
    MyTime b = ++a;
    b.print("B = ++A");
    a.print("A now =");
    b = a++;
    b.print("B = A++");
    a.print("A now =");

    b.Set(5, 59);
    b.print("B =");

    MyTime c = a + b;
    c.print("C = A+B");

    printf_s("A!=B:%s\n",(a!=b)?"true":"false");
    printf_s("A==B:%s\n", (a == b) ? "true" : "false");
}
