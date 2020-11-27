// Lab4.9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Описати рекурсивну функцію Palindrome (S) логічного типу, яка повертає True, якщо ціле S є паліндромом (Читається однаково зліва направо і справа наліво), і False в іншому випадку. Оператор циклу в тілі функції не використовувати. Вивести значення функції Palindrome для п'яти даних чисел.

#include <iostream>

bool Palindrome(long long int S);
bool Palindrome2(long long int S);
bool pal(const char* a, int length);

int main()
{
    long long int s;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input S: ";
        std::cin >> s;
        std::cout << "Palindrome(" << s << ") = " << Palindrome(s) << std::endl;
    }
}

bool Palindrome(long long int S) {
    if (S < 0) return false;
    else {
        const int len = (int)log10(S) + 1;
        char str[256];
        sprintf_s(str, "%lld", S);
        return (pal(str, len));
    }
}

bool pal(const char* a, int length) {
    if (length < 2) return true;
    if (a[0] != a[length - 1]) return false;
    return pal(a + 1, length - 2);
}

// не работает если в палиндроме есть нули
bool Palindrome2(long long int S) {
    if (S < 0) return false;
    else if (S < 10) return true;
    else {
        int len = (int)log10(S) + 1;
        int first = (int)(S / pow(10, len-1));
        int last = S % 10;
        long long int n = (S % (long long int)pow(10, len-1))/10;
        if (first == last && Palindrome(n)) return true;
        else return false;
    }
}