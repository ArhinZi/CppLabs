// Lab8.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// 3.	Напишіть оголошення і реалізацію закритого класу для роботи з датою, що складається з трьох цілих чисел: день, місяць, рік. Додайте до складу класу конструктори, деструктори, методи доступу, логічні методи для перевірки частин дати і визначення високосного року, друк дати в кількох форматах ( " дд.мм.гг ", " дд / мм / рррр ", " mmm - dd - yyyy " ). 
// Протестуйте цей клас.


#include <iostream>
using namespace std;

class Date {
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;
public:
    Date() {
        this->day = 1;
        this->month = 1;
        this->year = 1970;
    }
    Date(unsigned int day, unsigned int month, unsigned int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    ~Date()
    {
    }

    void set_day(unsigned int day) {
        this->day = day;
    }
    void set_month(unsigned int month) {
        this->month = month;
    }
    void set_year(unsigned int year) {
        this->year = year;
    }

    unsigned int get_day() {
        return this->day;
    }
    unsigned int get_month() {
        return this->month;
    }
    unsigned int get_year() {
        return this->year;
    }

    bool day_isvalid() {
        return (this->day >= 1 && this->day <= 31);
    }
    bool month_isvalid() {
        return (this->month >= 1 && this->month <= 12);
    }

    bool date_isvalid() {
        return (this->day_isvalid() && this->month_isvalid());
    }

    bool is_leap()
    {
        return (this->year % 400 == 0) || ((this->year % 4 == 0) && (this->year % 100 != 0));
    }

    void print(int tmplt = 0) {
        switch (tmplt)
        {
        case 0:
            printf_s("%i.%i.%i\n", this->day, this->month, this->year);
            break;
        case 1:
            printf_s("%i/%i/%i\n", this->day, this->month, this->year);
            break;
        case 2:
            printf_s("%i-%i-%i\n", this->day, this->month, this->year);
            break;
        default:
            break;
        }
    }
};

int main()
{
    Date d = Date(12, 12, 2020);
    d.print(2);
    cout << "Date is valid: " << (d.date_isvalid() ? "true" : "false")<<endl;
    cout << "Year is leap: " << (d.is_leap()?"true":"false")<<endl;
}
