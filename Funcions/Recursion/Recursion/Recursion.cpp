// Recursion
#include <iostream>
using namespace std;

void elevator(int floor);

int main()
{
    setlocale(LC_ALL, "");
    std:cout << "Hello Recursion!"<<endl;
    int n;
    cout << "Введите номер этажа: "; cin >> n; 
    elevator(n);
    
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
