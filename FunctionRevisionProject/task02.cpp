// Задание 2: Объявите функцию `sum_large`, которая принимает небольшое 
// и большое целые числа и возвращает их сумму.

#include <iostream>
using namespace std;

long long sum_large(int number1, long long number2);

int main()
{
    cout << sum_large(100, 10000000000LL);
    return 0;
}

long long sum_large(int number1, long long number2) {

    long long result = number1 + number2;

    return result;
}