// Задание 15: Вызовите функцию `print_number_and_text`.

#include <iostream>
using namespace std;

void print_number_and_text(int number, string text)
{
    cout << number << ": " << text << endl;
}

int main()
{
    cout << print_number_and_text(5, "number");
    return 0;
}