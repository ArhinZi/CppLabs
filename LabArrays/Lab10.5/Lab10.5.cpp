// Lab10.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

class Circle {
private:
    float itsX;
    float itsY;
    float itsRadius;
public:
    Circle() {
        this->itsX = 0;
        this->itsY = 0;
        this->itsRadius = 1;
    }
    Circle(float x, float y, float r) {
        this->itsX = x;
        this->itsY = y;
        this->itsRadius = r;
    }
    ~Circle()
    {
    }

    void set_x(float val) {
        this->itsX = val;
    }
    void set_y(float val) {
        this->itsY = val;
    }
    void set_r(float val) {
        this->itsRadius = val;
    }

    float get_x() {
        return this->itsX;
    }
    float get_y() {
        return this->itsY;
    }
    float get_r() {
        return this->itsRadius;
    }

    void print() {
        printf_s("Circle:\n\tX: %f \n\tY: %f \n\tR: %f \n", this->itsX, this->itsY, this->itsRadius);
    }

    Circle operator+ (Circle circle) {
        return Circle(this->get_x(), this->get_y(), (this->get_r() + circle.get_r()));
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
    /*srand(time(0));
    unsigned int n;
    std::cout << "Input N: ";
    std::cin >> n;
    Circle* cs = new Circle[n];
    std::cout << "Array: [";
    for (int i = 0; i < n; i++)
    {
        cs[i] = Circle();
        cs[i].set_r(rand() % 100);
        printf_s(" %i", (int)cs[i].get_r());
    }
    std::cout << " ]";*/

    unsigned int n = 10;
    Circle* cs = new Circle[n]{
        Circle(0,0,10),
        Circle(0,0,13),
        Circle(0,0,14),
        Circle(0,0,10),
        Circle(0,0,10),
        Circle(0,0,16),
        Circle(0,0,35),
        Circle(0,0,68),
        Circle(0,0,10),
        Circle(0,0,10)
    };

    int k = 0;
    Circle* cs2 = new Circle[n];
    cs2[k++] = cs[0];
    for (int i = 1; i < n; i++)
    {
        if (!(cs[i-1] == cs[i])) {
            cs2[k++] = cs[i];
        }
    }
    std::cout << "Res array len: " << k<<std::endl;
    std::cout << "Array: [";
    for (int i = 0; i < k; i++)
    {
        cs2[i].print();
    }
    std::cout << " ]";
}
