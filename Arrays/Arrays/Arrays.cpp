// Arrays

#include <iostream>
#include <windows.h>
using namespace std;
void FillRand(int arr[],const int n);
void Print(int arr[], const int n);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void minValueIn(int arr[], const int n);
void maxValueIn(int arr[], const int n);
void Sort(int arr[], const int n);
void shiftRight(int arr[], const int n);
void shiftLeft(int arr[], const int n);
void UniqueRand(int arr[], const int n);
int main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int a = 0;
	int b = 0;
	FillRand(arr, n); //заполняет массив случайными числами в заданном диапазоне 
	Print(arr, n); //выводит массив на экран
	Sum(arr, n); //находит сумму массива
	Avg(arr, n); //возвращает среднее-арифметическое элементов массива
	minValueIn(arr, n);//возвращает минимальное значение из массива
	maxValueIn(arr, n);//возвращает максимальное значение из массива
	UniqueRand(arr, n);//заполнение случайными уникальными числами в заданном диапазоне


	Sort (arr, n); //сортировка массива
	Print(arr, n); // вывод массива после сортировки 
	shiftLeft(arr, n);
	shiftRight(arr, n);
}

	void FillRand(int arr[], const int n)
	{
		cout << "---Заполняем массив случайными числами в заданном диапазоне---" << endl;
		int a = 0;
		int b = 0;
		cout << "Введите начало диапазона: "; cin >> a; cout << "Введите окончание диапазона: "; cin >> b;
		for (int i = 0; i < n; i++)
		{
			arr[i] = a + rand() % (b - a);
		}
	}
	void Print(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	
	void Sum(int arr[], const int n)
	{
		int Summa = 0;
		for (int i = 0; i < n; i++)
		{
			Summa = Summa + arr[i];
		}
		cout << "Сумма элементов массива: " << Summa; cout << endl; cout << endl;
	}
	void Avg(int arr[], const int n)
	{
		float Summa = 0;
		for (int i = 0; i < n; i++)
		{
			Summa = Summa + arr[i];
		}
		cout << "Среднее-арифметическое массива: " << Summa / n; cout << endl; cout << endl; 
	}
	void minValueIn(int arr[], const int n)
	{
		int Min = arr[0]; int Max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (Min > arr[i]) Min = arr[i];
			if (Max < arr[i]) Max = arr[i];
		}
		cout << "Минимальное число массива: " << Min; cout << endl; cout << endl;
	}
	void maxValueIn(int arr[], const int n)
	{
		int Min = 0; int Max = 0;
		for (int i = 0; i < n; i++)
		{
			if (Min > arr[i]) Min = arr[i];
			if (Max < arr[i]) Max = arr[i];
		}
		cout << "Максимальное число массива: " << Max; cout << endl; cout << endl;
	}
	void Sort(int arr[], const int n)
	{
		cout << "--Сортировка массива по возрастанию--" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	void shiftRight (int arr[], const int n)
	{
	   
		int number_of_shifts;
		cout << "Ввести количество сдвигов: "; cin >> number_of_shifts;
		number_of_shifts = n - number_of_shifts;
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = buffer;
			system("cls");

			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << "\t";
			}
			Sleep(500);
		}
	}
	void shiftLeft(int arr[], const int n)
	{
		int number_of_shifts;
		cout << "Ввести количество сдвигов: "; cin >> number_of_shifts;
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = buffer;
		}

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	void UniqueRand(int arr[], const int n)
	{
		cout << "---Заполнение случайными уникальными числами--"; cout << endl;
		int a = 0, b = 0, rnd = 0, maxrnd = 0;
	cout << "Введите начало диапазона: "; cin >> a; 
	cout << "Введите окончание диапазона: "; cin >> b;
	bool* numZ;
	numZ = new bool[b - a + 1];
	maxrnd = b - a;

	for (int i = 0; i <= b - a; i++)
	{
		numZ[i] = false;
	}

	for (int i = 0; i < n; i++) 
	{
		while (true) 
		{
			rnd = rand() % (maxrnd + 1);
			if (numZ[rnd] == false) {
				numZ[rnd] = true;
				arr[i] = a + rnd;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	}