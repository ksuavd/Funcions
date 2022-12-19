// Arrays

#include "stafx.h"
#include"Constans.h"
#include"FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Avg.h"
#include "minValueIn.h"
#include "maxValueIn.h"
#include "Sum.h"
int main()
{
	setlocale(LC_ALL, "");
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
	
	template<typename T>
	void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
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

	template<typename T>
	double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	}
	
	template<typename T>
	void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
	
	template<typename T>
	int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
	

	template<typename T>
	int minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
	
	template<typename T>
	int maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
	