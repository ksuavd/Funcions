// Recursion
#include <iostream>
using namespace std;

void elevator(int floor);
int fact(int n);
int degree(int n, int stepen);
double degree(double n, int stepen);
void fib(int n, int a=0, int b=1);
void fib2(int n,int i=0, long long int a = 0, long long int b = 1);
//#define ELEVATOR 
//#define FACTORIAL 
//#define DERGREE
//#define FIB

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
#ifdef FACTORIAL
     int n;
     cout << "Введите число: "; cin >> n;
 cout << "n! " << n << " = " << fact(n) << endl;
#endif
#ifdef DERGREE
 double n; int stepen;
 cout << "Введите число: "; cin >> n;
 cout << "Введите степень числа: "; cin >> stepen;
 cout << n << " в степени " << stepen <<" = " << degree(n, stepen) << endl;
#endif
#ifdef FIB
 int a;
 int b; int n;
 cout << "Введите предельное число ряда Фибоначчи: "; cin >> n;
  fib(n);
#endif
  int a;
  int b; int n; int i;
  cout << "Введите предельное число ряда Фибоначчи: "; cin >> n;
  fib2(n);
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
    if (n == 0) return 1;
    else return n * fact(n - 1);
}
int degree(int n, int stepen)
{
    if (stepen == 0) return 1;
    else if (stepen < 0) return 1 / n * degree(n, stepen + 1);
    else return n * degree(n, stepen - 1);
   // return stepen == 0 ? 1 : (n * degree(n, stepen - 1));
}
double degree(double n, int stepen)
{
   /* if (stepen == 0) return 1;
    else if (stepen < 0) return 1 / n * degree(n, stepen + 1);
    else return n * degree(n, stepen - 1);*/
    return stepen==0?1: stepen >0 ? n * degree(n, stepen - 1):1/ n * degree(n, stepen + 1);
}

void fib(int n, int a, int b)
{
    if (a>n)return;
    cout << a << "\t";
    fib(n, b, a + b);
}
void fib2(int n,int i, long long int a, long long int b)
{
    if (i>n)return;
    cout << i << "\t" <<a << "\n";
    fib2(n,i+1,b,a+b);
}