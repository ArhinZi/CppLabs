﻿// Lab5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Напишіть програму, в якій оголошуються беззнакове коротке ціле Num і вказівник на нього  pNum. Задайте адресу цілого вказівнику. Виведіть на екран значення змінних і адреси кожної змінної у шістнадцятиричній і десятковій системі числення. Порівняйте отримані результати. Зробіть висновки.

#include <iostream>

int main()
{
    unsigned short int Num = 30;
    unsigned short int * pNum = &Num;
    printf("Num Value %d / %X \n", Num, Num);
    printf("Num Addr %d / %X \n", &Num, &Num);
    printf("pNum Value %d / %X \n", pNum, pNum);
    printf("pNum Addr %d / %X \n", &pNum, &pNum);

    // Адрес Num и значение pNum совпадают, значит pNum явзяется хранилищем для адреса Num
    // А адрес pNum хранится уже в совершенно другой ячейке с другим адресом
}