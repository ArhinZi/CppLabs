﻿// Lab6.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// 4.	Опишіть три функції:
// 1)	яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату цей об'єкт. Перевірте її. 
// 2)	яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату посилання на об'єкт. Перевірте її. 
// 3)	яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату адресу об'єкта. Перевірте її.
// Перевірте, чи можна описати аналогічні функції, якщо об’єкт створюється у стеку.Зробіть висновок.


#include <iostream>

int Func1() {
    int* a = new int;
    *a = 10;
    return *a;
}

int& Func2() {
    int* a = new int;
    *a = 10;
    return *a;
}

int* Func3() {
    int* a = new int;
    *a = 10;
    return a;
}

int Func21() {
    int a = 10;
    return a;
}

int& Func22() {
    int a = 10;
    return a;
}

int* Func23() {
    int a = 10;
    return &a;
}

int main()
{
    std::cout << Func1() <<std::endl;
    std::cout << Func2() << std::endl;
    std::cout << Func3() << std::endl;
}
// Создавая переменную в свободной памяти мы берем на себя ответственность за удаление этой переменной. Поэтому после завершения функции переменная не удаляется, и не делая этог оявно мы создаем потенциальные утечки памяти
// Создавая переменную в стеке она управляется программой. Как только функция в которой она создалась завершается переменная удаляется. Однако если повезет мы все еще найдем по ее адрему нужное значение переменной, однако это неправильно.