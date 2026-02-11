// Задание 10: Объявите функцию `print_message`, которая принимает строку 
// и ничего не возвращает.

#include <iostream>
using namespace std;

string print_message(string s) {
    cout << s;
}


int main()
{
    print_message("Hello, C++!");
    return 0;
}