//Sort
#include"stdafx.h"
#include"Constans.h"
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