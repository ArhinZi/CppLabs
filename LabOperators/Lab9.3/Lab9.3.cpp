// Lab9.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// 

#include <iostream>

class Circle {
private:
    float* itsX;
    float* itsY;
    float* itsRadius;
public:
    Circle() {
        this->itsX = new float(0);
        this->itsY = new float(0);
        this->itsRadius = new float(1);
    }
    Circle(float x, float y, float r) {
        this->itsX = new float(x);
        this->itsY = new float(y);
        this->itsRadius = new float(r);
    }
    Circle(Circle& c) {
        this->itsX = new float(c.get_x());
        this->itsY = new float(c.get_y());
        this->itsRadius = new float(c.get_r());
    }
    ~Circle()
    {
        delete this->itsX;
        delete this->itsY;
        delete this->itsRadius;
    }

    void set_x(float val) {
        *(this->itsX) = val;
    }
    void set_y(float val) {
        *(this->itsY) = val;
    }
    void set_r(float val) {
        *(this->itsRadius) = val;
    }

    float get_x() {
        return *(this->itsX);
    }
    float get_y() {
        return *(this->itsY);
    }
    float get_r() {
        return *(this->itsRadius);
    }

    void print() {
        printf_s("Circle:\n\tX: %f \n\tY: %f \n\tR: %f \n", this->get_x(), this->get_y(), this->get_r());
    }

    Circle& operator= (Circle& circle) {
        *(this->itsX) = circle.get_x();
        *(this->itsY) = circle.get_y();
        *(this->itsRadius) = circle.get_r();
        return *this;
    }

    Circle& operator+ (Circle& circle) {
        this->set_r(this->get_r() + circle.get_r());
        return *this;
    }
    bool operator<(Circle circle) {
        return(this->get_r() < circle.get_r());
    }
    bool operator==(Circle circle) {
        return(this->get_r() == circle.get_r());
    }
};

int main()
{
    Circle a(1, 1, 10);
    a.print();
    Circle b(2, 2, 20);
    b.print();
    Circle c = a+b;
    c.print();
    printf_s("a<b: %s\n", (a < b) ? "true" : "false");
    printf_s("a==c: %s\n", (a == c) ? "true" : "false");
}
