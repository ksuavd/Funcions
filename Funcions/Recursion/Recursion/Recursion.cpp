// Recursion
#include <iostream>
using namespace std;

void elevator(int floor);
int fact(int n);
int degree(int n, int stepen);
int fib(int end);
//#define ELEVATOR 
int main()
{
setlocale(LC_ALL, "");
#ifdef ELEVATOR
    setlocale(LC_ALL, "");
    std:cout << "Hello Recursion!"<<endl;
    int n;
    cout << "Введите номер этажа: "; cin >> n; 
    elevator(n);
#endif
    int n; int stepen; int end;
 cout << "Введите число: "; cin >> n;
 cout << "n! " << n << " = " << fact(n) << endl;
 cout << "Введите степень числа: "; cin >> stepen;
 cout << n << " в степени " << stepen <<" = " << degree(n, stepen) << endl;
 cout << "Введите предел вывода ряда Фибоначчи: "; cin >> end;
 if (end < 0)
     cout << "Введите положительное число!" << endl;
 else
     for (int i = 0; i < end; i++)
     {
         cout  << fib(i) << "\t";
     }

 return 0;
}
void elevator(int floor)
{
    if (floor == 0)
    {
        cout << "Вы в подвале" << endl;//когда "лифт" достигнет 0 этажа функция остановится
        return;//прерывает работу функции 
    }
    cout << "Вы на " << floor << " этаже" << endl;
    elevator(floor-1); 
    cout << "Вы на " << floor << " этаже" << endl;
}
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
int degree(int n, int stepen)
{
    if (stepen == 0) return 1;
    else return (n * degree(n, stepen - 1));
}
int fib(int end)
{
        if (end==1)
        return 1;
 if (end == 0)
        return 0;
    else
    { 
    int res= fib(end - 2) + fib(end - 1);
    return res;
    }
}