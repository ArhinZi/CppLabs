#include "Sorters.h"

// Сортировка обменом по возрастанию
void bubbleSort(int* num, int size)
{
    int comp = 0;
    int exch = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = (size - 1); j > i; j--)
        {
            comp++;
            if (num[j - 1] > num[j])
            {
                exch++;
                int temp = num[j - 1];
                num[j - 1] = num[j];
                num[j] = temp;
            }
        }
    }
    printf_s("\tComparisons: %i\n\tReplacements: %i\n", comp, exch);
}

// сортировка выбором по убыванию
void choicesSortRev(int* num, int size)
{
    int comp = 0;
    int exch = 0;
    for (int repeat_counter = 0; repeat_counter < size; repeat_counter++)
    {
        int temp = num[0];
        for (int element_counter = repeat_counter + 1; element_counter < size; element_counter++)
        {
            comp++;
            if (num[repeat_counter] < num[element_counter])
            {
                exch++;
                temp = num[repeat_counter];
                num[repeat_counter] = num[element_counter];
                num[element_counter] = temp;
            }
        }
    }
    printf_s("\tComparisons: %i\n\tReplacements: %i\n", comp, exch);
}

// сортировка вставками по возрастанию
void insertionSort(int* num, int size)
{
    int temp, item;
    int comp = 0;
    int exch = 0;
    for (int counter = 1; counter < size; counter++)
    {
        temp = num[counter];
        item = counter - 1; 
        comp++;
        while (item >= 0 && num[item] > temp)
        {
            comp++;
            exch++;
            num[item + 1] = num[item];
            num[item] = temp;
            item--;
        }
    }
    printf_s("\tComparisons: %i\n\tReplacements: %i\n", comp, exch);
}

// сортировка двемерного массива целых чисел по убыванию максимальных элементов столбцов
void byMaxSort2D(int* arr, int sizeX, int sizeY) {
   // *((arr + i * sizeY) + j)
    int *max_indexes = new int[sizeX];
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            if (j == 0 || *((arr + i * sizeY) + max_indexes[i]) < *((arr + i * sizeY) + j))
                max_indexes[i] = j;
        }
    }

    std::cout << "Maxes are: \n";
    for (int i = 0; i < sizeX; i++)
    {
        std::cout << "\t" << *((arr + i * sizeX) + max_indexes[i]) << std::endl;
    }

    std::cout << "Sorting........ \n";
    int tempV, tempI, item;
    for (int counter = 1; counter < sizeX; counter++)
    {
        int* tempV = new int[sizeY];
        for (int i = 0; i < sizeY; i++)
        {
            tempV[i] = *((arr + counter * sizeX) + i);
        }
        tempI = max_indexes[counter];
        item = counter - 1;
        while (item >= 0 && *((arr + item * sizeX) + max_indexes[item]) > tempV[tempI])
        {
            for (int i = 0; i < sizeY; i++)
            {
                *((arr + (item + 1) * sizeX) + i) = *((arr + item * sizeX) + i);
            }
            max_indexes[item + 1] = max_indexes[item];
            for (int i = 0; i < sizeY; i++)
            {
                *((arr + item * sizeX) + i) = tempV[i];
            }
            max_indexes[item] = tempI;
            item--;
        }
        delete[] tempV;
    }
    std::cout << "SORTED Maxes are: \n";
    for (int i = 0; i < sizeX; i++)
    {
        std::cout << "\t" << *((arr + i * sizeX) + max_indexes[i]) << std::endl;
    }
    delete[] max_indexes;
}

void studentInsertionSorter(Student* num, int size)
{
    Student temp;
    int item;
    int comp = 0;
    int exch = 0;
    for (int counter = 1; counter < size; counter++)
    {
        temp = num[counter];
        item = counter - 1;
        comp++;
        while (item >= 0 && num[item] > temp)
        {
            comp++;
            exch++;
            num[item + 1] = num[item];
            num[item] = temp;
            item--;
        }
    }
    printf_s("\tComparisons: %i\n\tReplacements: %i\n", comp, exch);
}