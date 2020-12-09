// Lab10.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    /*unsigned int n;
    std::cout << "Input N: ";
    std::cin >> n;
    std::cout << "Input array A: ";
    unsigned int* arrA = new unsigned int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arrA[i];
    }
    std::cout << "Input array B: ";
    unsigned int* arrB = new unsigned int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arrB[i];
    }*/

    unsigned int n = 5;
    unsigned int* arrA = new unsigned int[n] {1,3,5,7,8};
    unsigned int* arrB = new unsigned int[n] {2,4,6,8,10};

    unsigned int* arrC = new unsigned int[2*n];
    int currA = 0;
    int currB = 0;
    for (int i = 0; i < 2*n; i++)
    {
        if (arrA[currA] <= arrB[currB]) {
            arrC[i] = arrA[currA];
            currA++;
        }
        else {
            arrC[i] = arrB[currB];
            currB++;
        }
    }

    std::cout << "Array: [";
    for (int i = 0; i < 2*n; i++)
    {
        printf_s(" %i", arrC[i]);
    }
    std::cout << " ]";
}
