// Arrays

#include <iostream>
#include <windows.h>
using namespace std;
void Print(int arr[], const int n); 
void Sort(int arr[], const int n);
void FillRand(int arr[], const int n, int manRand = 0, int maxRand = 100);
int Sum(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void UniqueRand(int arr[], const int n);

void Print(double arr[], const int n);
double Avg(int arr[], const int n);
void Sort(double arr[], const int n);
void FillRand(double arr[], const int n, double manRand = 0, double maxRand = 100);
double Sum(double arr[], const int n);
double minValueIn(double arr[], const int n);
double maxValueIn(double arr[], const int n);

void Print(char arr[], const int n);
double Avg(char arr[], const int n);
void Sort(char arr[], const int n);
void FillRand(char arr[], const int n);
int Sum(char arr[], const int n);
char minValueIn(char arr[], const int n);
char maxValueIn(char arr[], const int n);

const int ROWS = 3;
const int COLS = 4;
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(int arr [ROWS] [COLS], const int ROWS, const int COLS);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum (int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

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
	cout << delimetr << endl;
	int i_arr_2[ROWS][COLS];	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort (i_arr_2, ROWS, COLS); cout << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметчиское массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное число массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное число массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimetr << endl;
	double i_arr_3[ROWS][COLS];
	FillRand(i_arr_3, ROWS, COLS);
	Print(i_arr_3, ROWS, COLS);
	Sort(i_arr_3, ROWS, COLS); cout << endl;
	Print(i_arr_3, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_3, ROWS, COLS) << endl;
	cout << "Среднее арифметчиское массива: " << Avg(i_arr_3, ROWS, COLS) << endl;
	cout << "Минимальное число массива: " << minValueIn(i_arr_3, ROWS, COLS) << endl;
	cout << "Максимальное число массива: " << maxValueIn(i_arr_3, ROWS, COLS) << endl;
	cout << delimetr << endl;
	char i_arr_4[ROWS][COLS];
	FillRand(i_arr_4, ROWS, COLS);
	Print(i_arr_4, ROWS, COLS); 
	Sort(i_arr_4, ROWS, COLS); cout << endl;
	Print(i_arr_4, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_4, ROWS, COLS) << endl;
	cout << "Среднее арифметчиское массива: " << Avg(i_arr_4, ROWS, COLS) << endl;
	cout << "Минимальное число массива: " << minValueIn(i_arr_4, ROWS, COLS) << endl;
	cout << "Максимальное число массива: " << maxValueIn(i_arr_4, ROWS, COLS) << endl;
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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % 10000;
				arr[i][j] /= 100;
			}
		}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = rand() % 96;
					arr[i][j] += 32;
				}
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
	void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
	}
	void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
	}
	void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
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
	void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = COLS - 1; k > j; k--)
					if (arr[i][k] < arr[i][k - 1])
					{
						int temp = arr[i][k];
						arr[i][k] = arr[i][k - 1];
						arr[i][k - 1] = temp;
					}
			}
		}
	}
	void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = COLS - 1; k > j; k--)
					if (arr[i][k] < arr[i][k - 1])
					{
						double temp = arr[i][k];
						arr[i][k] = arr[i][k - 1];
						arr[i][k - 1] = temp;
					}
			}
		}
	}
	void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = COLS - 1; k > j; k--)
					if (arr[i][k] < arr[i][k - 1])
					{
						char temp = arr[i][k];
						arr[i][k] = arr[i][k - 1];
						arr[i][k - 1] = temp;
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