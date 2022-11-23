// Arrays

#include <iostream>
#include <windows.h>
using namespace std;
void Print(int arr[], const int n); void Print(double arr[], const int n); void Print(char arr[], const int n);
double Avg(int arr[], const int n); double Avg(char arr[], const int n);
void Sort(int arr[], const int n); void Sort(double arr[], const int n); void Sort(char arr[], const int n);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void UniqueRand(int arr[], const int n);
void FillRand(int arr[], const int n, int manRand=0, int maxRand =100); void FillRand(double arr[], const int n, double manRand = 0, double maxRand = 100); void FillRand(char arr[], const int n);
int Sum(int arr[], const int n); double Sum(double arr[], const int n); int Sum(char arr[], const int n);
int minValueIn(int arr[], const int n); double minValueIn(double arr[], const int n); char minValueIn(char arr[], const int n);
int maxValueIn(int arr[], const int n); double maxValueIn(double arr[], const int n); char maxValueIn(char arr[], const int n);
#define delimetr "\n----------------------------------------------------------\n"
int main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n); 
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметчиское массива: " << Avg(arr, n) << endl;
	cout << "Минимальное число массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное число массива: " << maxValueIn(arr, n) << endl;
	Sort(arr, n); Print(arr, n);
	cout << delimetr << endl;
	/*int number_of_shifts=0;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;  shiftLeft(arr, n, number_of_shifts); Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;  shiftRight(arr, n, number_of_shifts); Print(arr, n);*/
	
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE); Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметчиское массива: " << Avg(arr, n) << endl;
	cout << "Минимальное число массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное число массива: " << maxValueIn(brr, SIZE) << endl;
	cout << delimetr << endl;
	
	const int size = 8;
	char crr[size];
	FillRand(crr, size);
	Print(crr, size);
	Sort(crr, size); Print(crr, size);
	cout << "Сумма элементов массива: " << Sum(crr, size) << endl;
	cout << "Среднее арифметчиское массива: " << Avg(crr, size) << endl;
	cout << "Минимальное число массива: " << minValueIn(crr, size) << endl;
	cout << "Максимальное число массива: " << maxValueIn(crr, size) << endl;
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
		arr[i] = rand() % int((maxRand-minRand)+ minRand);
	}
}
void FillRand(double arr[], const int n, double minRand, double maxRand)
{
	if (minRand > maxRand)
	{
		double buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int(maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 96;
		arr[i] = arr[i]+ 32;
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
	void Print(double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	void Print(char arr[], const int n)
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
	double Avg(char arr[], const int n)
	{
		return (double)Sum(arr, n) / n;
	}
	void Sort(int arr[], const int n)
	{
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
	void Sort(double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					double temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	void Sort(char arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					char temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	void shiftLeft(int arr[], const int n, int number_of_shifts)
	{
		int buffer = arr[0];
		for (int i = 0; i < number_of_shifts; i++)
		{
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = buffer;
		}
	}
	void shiftRight(int arr[], const int n,int number_of_shifts)
	{
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = buffer;
		}
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
	double Sum(double arr[], const int n)
	{
		double Sum = 0;
		for (int i = 0; i < n; i++)
		{
			Sum += arr[i];
		}
		return Sum;
	}
	int Sum(char arr[], const int n)
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
	double minValueIn (double arr[], const int n)
	{
		double Min = arr[0]; double Max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (Min > arr[i]) Min = arr[i];
			if (Max < arr[i]) Max = arr[i];
		}
		return Min;
	}
	char minValueIn(char arr[], const int n)
	{
		char Min = arr[0]; char Max = arr[0];
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
	double maxValueIn(double arr[], const int n)
	{
		double Min = arr[0]; double Max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (Min > arr[i]) Min = arr[i];
			if (Max < arr[i]) Max = arr[i];
		}
		return Max;
	}
		char maxValueIn(char arr[], const int n)
		{
			char Min = arr[0]; char Max = arr[0];
			for (int i = 0; i < n; i++)
			{
				if (Min > arr[i]) Min = arr[i];
				if (Max < arr[i]) Max = arr[i];
			}
			return Max;
	}