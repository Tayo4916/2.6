// 2.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Введите трехзначное число: ";
    cin >> a;
    if (a > 99 && a < 1000) {
        b = a % 100;
        c = a / 100;
        cout << "Новое число: " << b << c << endl;
    }
    else
        cout << "Введенное число не соответствует условию.\n";

    int e, d, r, t;
    cout << "Введите число n > 9: ";
    cin >> e;
    if (e > 9) {
        d = e % 10;
        r = e / 10;
        t = r % 10;
        cout << "Десятки: " << t << ". Единицы: " << d << endl;
    }
    else
        cout << "Неверно набрано число.";
    _getch();
}

