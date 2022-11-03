// Funcions

#include <iostream>
using namespace std;
int Add(int a, int b);//Прототип функции (Объявление функции - Funcions declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
int Power(int a, int b);

int main()
{
    setlocale(LC_ALL, "");
    int a, b;
    cout << "Введите два числа: "; cin >> a; cin >> b; cout << endl;
    int c = Add(a, b); // Вызов функциии
    cout << a << " + " << b << " = " << c << endl;

    cout << a << " - " << b << " = " << Sub(a, b) << endl;
    cout << a << " * " << b << " = " << Mul(a, b) << endl;
    cout << a << " / " << b << " = " << Div(a, b) << endl;
    cout << a << " ^ " << b << " = " << Power(a, b) << endl;
}
int Add(int a, int b) //Реализация
{
    //Addition - сложение
    int sum = a + b;
    return sum;
}

int Sub(int a, int b)
{
    //Subtration-вычитание
    return a - b;
}
int Mul(int a, int b)
{
    //Multiplicahsion -умножение
    return a * b;
}
int Div(int a, int b)
{
    //Division -деление
    return a / b;
}

int Power(int a, int b)
{
    int c = a;
    for (int i = 1; i < b; i++)
    {
        c = a * c;
    }
    return c;
}