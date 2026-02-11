// Задание 14: Объявите функцию `is_digit`, которая принимает символ 
// и булевское значение и возвращает истину, если символ является цифрой.

#include <iostream>
using namespace std;

bool is_digit(char a, bool b) {
    
    return b = (a >= 48 && a <= 57) ? true : false;
}

int main()
{
    cout << is_digit('5', true);
    return 0;
}