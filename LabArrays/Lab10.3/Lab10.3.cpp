// Lab10.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    unsigned int n;
    std::cout << "Input N: ";
    std::cin >> n;
    std::cout << "Input array: ";
    unsigned int* arr = new unsigned int[n];

    unsigned int min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(arr+i);
        if (*(arr + i) < *(arr + min)) min = i;
        if (*(arr + i) > *(arr + max)) max = i;
    }

    for (int i = min+1; i < max; i++)
    {
        *(arr + i) = 0;
    }

    std::cout << "Array: [";
    for (int i = 0; i < n; i++)
    {
        printf_s(" %i", *(arr + i));
    }
    std::cout << " ]";

}
