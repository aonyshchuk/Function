/* Завдання 2. Написати функцію, яка отримує в якості 
параметрів 2 цілих числа та повертає суму чисел із діапазону між ними*/

#include <iostream>
using namespace std;


int SUM(int x, int y)
{
	int sum = 1;
	for (size_t i = x+1; i <y; i++)
	{
		sum += i; 
	}
	return sum; 
}



int main()
{
	int x = 4;
	int y = 8;

	cout << "Enter number 1 ->";
	cin >> x;
	cout << "Enter number 2 ->";
	cin >> y;

	SUM(x,y); 

	return 0; 
}