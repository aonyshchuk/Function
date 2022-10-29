#include <iostream>
using namespace std;
 
/*Завдання 2. Написати функцію, що визначає середнє 
арифметичне елементів переданого їй масиву*/


void Count(int arr[], const uint32_t size) 
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t"; 
	}
	cout << endl; 
}

int CalcArr(int arr[], const uint32_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
		avg = sum / size;

	}
	return avg; 
}






int main()
{
	int sum = 0;
	int avg = 0; 
	const uint32_t size = 10; 
	int arr_i[size]{1,2,3,4,5,6,7,8,9,10};
	Count(arr_i, size);
	int CalcArr(int arr[], const uint32_t size); 
	return 0; 
}