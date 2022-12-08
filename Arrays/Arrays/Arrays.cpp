// Arrays

#include"stdafx.h"
#include"Constans.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Shift.h"
#include"Statistics.h"

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


	


