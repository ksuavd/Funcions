#include"Constans.h"
#include"stdafx.h"
#include"Constans.h"
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		double Sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				Sum += arr[i][j];
			}
		}
		return Sum;
	}
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		char Sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				Sum += arr[i][j];
			}
		}
		return Sum;
	}
}
int minValueIn(int arr[], const int n)
{
	int Min = arr[0]; int Max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Min > arr[i]) Min = arr[i];
		if (Max < arr[i]) Max = arr[i];
	}
	return Min;
}
double minValueIn(double arr[], const int n)
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
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
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
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
