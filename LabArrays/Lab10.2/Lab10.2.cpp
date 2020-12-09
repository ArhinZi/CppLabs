// Lab10.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    unsigned int n;
    std::cout << "Input N: ";
    std::cin >> n;
    std::cout << "Input array: ";
    unsigned int* arr = new unsigned int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }


    std::cout << "Reversed array: [";
    for (int i = 0; i < n; i++)
    {
        printf_s(" %i", arr[n-i-1]);
    }
    std::cout << " ]"<<std::endl;

    std::cout << "Odd array: [";
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[n - i - 1] % 2 == 1) {
            printf_s(" %i", arr[n - i - 1]);
            k++;
        }
    }
    std::cout << " ]" << std::endl;
    std::cout << "Odd count = " << k;
}
