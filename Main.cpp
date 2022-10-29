/*Завдання 1. Написати перевантажені функції(int, double,
	char) для виконання таких завдань :
■ Ініціалізація квадратної матриці;
■ Вивід матриці на екран;
■ Визначення максимального й мінімального елемента
на головній діагоналі матриці;
■ Сортування елементів за зростанням окремо для
кожного рядка матриці*/ 


#include <iostream>
#include <iomanip>
#include<ctime>

using namespace std; 


const int max_size = 20; 

template <typename T1>
void RandArray(T1 arr[][max_size], const int col, const int row)
{
	if(typeid(arr[0]) == typeid(int))
	{
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				arr[i][j] = rand() % 10; 
			}
		}
	}
	if (typeid(arr[0][0]) == typeid(double))
	{
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				arr[i][j] = (100 + rand() % 99)/10;
			}
		}
	}
	if (typeid(arr[0][0]) == typeid(char))
	{
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				arr[i][j] = 100 + rand() % 255;
			}
		}
	}
}

template <typename T2>
void Matrix(T2 arr[][max_size], const int col, const int row)
{
	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < row; j++)
		{
			cout << arr[i][j] << endl;
		}
	}
}

int findMaxDiag(int arr[][max_size], const int col, const int row) {

	int max = arr[0][0];

	for (int i = 1; i < col; i++) {

		if (arr[i][i] > max) {

			max = arr[i][i];

		}

	}

	return max;

}
double findMaxDiag(double arr[][max_size], const int col, const int row) {

	double max = arr[0][0];

	for (int i = 1; i < col; i++) {

		if (arr[i][i] > max) {

			max = arr[i][i];

		}

	}

	return max;

}
char findMaxDiag(char arr[][max_size], const int col, const int row) {

	char max = arr[0][0];

	for (int i = 1; i < col; i++) {

		if (arr[i][i] > max) {

			max = arr[i][i];

		}

	}

	return max;

}

int findMinDiag(int arr[][max_size], const int col, const int row) {

	int min = arr[0][0];

	for (int i = 1; i < col; i++) {

		if (arr[i][i] < min) {

			min = arr[i][i];

		}

	}

	return min;

}
double findMinDiag(double arr[][max_size], const int col, const int row) {

	double min = arr[0][0];

	for (int i = 1; i < col; i++) {

		if (arr[i][i] < min) {

			min = arr[i][i];

		}

	}

	return min;

}
char findMinDiag(char arr[][max_size], const int col, const int row) {

	char min = arr[0][0];

	for (char i = 1; i < col; i++) {

		if (arr[i][i] < min) {

			min = arr[i][i];

		}

	}

	return min;

}


int main() 
{
	srand(time(0)); 
	const int col=5;
	const int row =5;
	int arr_i[max_size][max_size]{};
	double arr_d[max_size][max_size]{};
	char arr_c[max_size][max_size]{};
	 
	 RandArray(arr_i, col, row);
	 Matrix(arr_i, col, row);
	 findMinDiag(arr_i, col, row);
	 findMaxDiag(arr_i, col, row);

	 RandArray(arr_d, col, row);
	 Matrix(arr_d, col, row);
	 findMinDiag(arr_d, col, row);
	 findMaxDiag(arr_d, col, row);


	 RandArray(arr_c, col, row);
	 Matrix(arr_c, col, row);
	 findMinDiag(arr_c, col, row);
	 findMaxDiag(arr_c, col, row);

	return 0; 
}