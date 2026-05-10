#include "functions.h"
#include <iostream>
using namespace std;

namespace MyApp {
    long long number = 0;
    long long sum = 0;
    long long product = 1;
    int count = 0;
}

void inputData() {
    cout << "Введіть ціле число: ";
    cin >> MyApp::number;
    if (cin.fail())
        throw runtime_error("Помилка: введено не число!");
}

void processData() {
    long long temp = MyApp::number;
    if (temp < 0) temp = -temp; // якщо від'ємне — беремо модуль

    MyApp::sum = 0;
    MyApp::product = 1;
    MyApp::count = 0;

    while (temp > 0) {
        int digit = temp % 10;     // беремо останню цифру
        MyApp::sum += digit;       // додаємо до суми
        MyApp::product *= digit;   // множимо до добутку
        MyApp::count++;            // рахуємо кількість цифр
        temp /= 10;                // відкидаємо останню цифру
    }
}

void displayResult() {
    cout << "Число: " << MyApp::number << endl;
    cout << "Сума цифр: " << MyApp::sum << endl;
    cout << "Добуток цифр: " << MyApp::product << endl;
    cout << "Кількість цифр: " << MyApp::count << endl;
}

