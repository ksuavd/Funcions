// Arrays

#include <iostream>
#include <windows.h>
using namespace std;
void Print(int arr[], const int n);
double Avg(int arr[], const int n);
void Sort(int arr[], const int n);
void shiftRight(int arr[], const int n);
void shiftLeft(int arr[], const int n);
void UniqueRand(int arr[], const int n);
void FillRand(int arr[], const int n, int manRand=0, int maxRand =100);
int Sum(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	
	
	//FillRand(arr, n); //заполняет массив случайными числами в заданном диапазоне 
	//Print(arr, n); //выводит массив на экран
	
	
	//UniqueRand(arr, n);//заполнение случайными уникальными числами в заданном диапазоне
	FillRand(arr, n);
	Print(arr, n); // вывод массива после сортировки 
	//shiftLeft(arr, n);
	//shiftRight(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметчиское массива: " << Avg(arr, n) << endl;
	cout << "Минимальное число массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное число массива: " << maxValueIn(arr, n) << endl;
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)+ minRand;
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
	
	
	double Avg(int arr[], const int n)
	{
		return (double)Sum(arr, n) / n;
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
	int Sum(int arr[], const int n)
	{
		int Sum = 0;
		for (int i = 0; i < n; i++)
		{
			Sum += arr[i];
		}
		return Sum;
	}
	int minValueIn (int arr[], const int n)
	{
		int Min = arr[0]; int Max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (Min > arr[i]) Min = arr[i];
			if (Max < arr[i]) Max = arr[i];
		}
		return Min;
	}
	int maxValueIn(int arr[], const int n)
	{
		int Min = arr[0]; int Max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (Min > arr[i]) Min = arr[i];
			if (Max < arr[i]) Max = arr[i];
		}
		return Max;
	}