// Lab10.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    unsigned int a, n, d;
    std::cout << "Input A N D: ";
    std::cin >> a >> n >> d;
    unsigned int* arr = new unsigned int[n];
    std::cout << "[";
    for (int i = 0; i < n; i++)
    {
        arr[i] = a + (i * d);
        printf_s(" %i", arr[i]);
    }
    std::cout << " ]";

    delete[] arr;
}
