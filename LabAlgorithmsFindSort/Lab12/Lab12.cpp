// Lab12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Student.h"
#include "Sorters.h"

void printArr(int* arr, int size) {
	std::cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "]\n";
}

void printArr2d(int *arr, int sizeX, int sizeY) {
	std::cout << "[\n";
	for (int i = 0; i < sizeX; i++)
	{
		std::cout << "\t";
		for (int j = 0; j < sizeY; j++)
		{
			std::cout << *((arr+i*sizeY)+j) << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "]\n";
}

void genArrayIncr(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10000;
	}
	bubbleSort(arr, size);
	printArr(arr, size);
}

void genArrayFromHundr(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 200) - 100;
	}
	printArr(arr, size);
}

void genArrayDecr(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10000;
	}
	choicesSortRev(arr, size);
	printArr(arr, size);
}

int main()
{
	srand(time(NULL));
    std::cout << "Hello World!\n";
	std::cout << "Generate sorted array by incr:\n";
	int a1[100]; 
	genArrayIncr(a1, 100);

	std::cout << "\n--------------------------\n\n";

	std::cout << "Generate array from -100 to 100:\n";
	int a2[100];
	genArrayFromHundr(a2, 100);

	std::cout << "\n--------------------------\n\n";

	std::cout << "Generate sorted array by decr:\n\n";
	int a3[100];
	genArrayDecr(a3, 100);
	std::cout << "Sort it by incr:\n";
	insertionSort(a3, 100);
	printArr(a3, 100);
	std::cout << "Sort it again:\n";
	insertionSort(a3, 100);
	printArr(a3, 100);
    
	std::cout << "\n--------------------------\n\n";
	
	const int x = 5, y = 5;
	printf_s("\n\nNow, generate 2d array %ix%i:\n", x, y);
	int array2d[x][y];
	for (int i = 0; i < x; i++)
	{
		genArrayFromHundr(array2d[i], y);
	}
	std::cout << "Now, sort it by maxes by line:\n";
	byMaxSort2D((int*)array2d, x, y);
	std::cout << "Res array:\n";
	printArr2d((int*)array2d, x, y);

	std::cout << "\n--------------------------\n\n";

	std::cout << "Create students array:\n";
	const int studs = 10;
	Student arr[studs]{
		Student("N1", rand()%10),
		Student("N2", rand() % 10),
		Student("N3", rand() % 10),
		Student("N6", rand() % 10),
		Student("N7", rand() % 10),
		Student("N0", rand() % 10),
		Student("N8", rand() % 10),
		Student("N9", rand() % 10),
		Student("N4", rand() % 10),
		Student("N5", rand() % 10)
	};
	for (int i = 0; i < studs; i++)
	{
		printf_s("Student %s: %i\n", arr[i].get_name().c_str(), arr[i].get_mark());
	}
	std::cout << "Now, sort it by decr of marks:\n";
	studentInsertionSorter(arr, studs);
	for (int i = 0; i < studs; i++)
	{
		printf_s("Student %s: %i\n", arr[i].get_name().c_str(), arr[i].get_mark());
	}
}


