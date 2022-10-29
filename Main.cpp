#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

//Завдання 1. Написати функцію, яка приймає дві дати
//(тобто функція приймає шість параметрів) та обчислює
//різницю в днях між цими датами.Для виконання цього
//завдання необхідно також написати функцію, яка визначає, чи є рік високосним.


int Difference(int dayx, int monthx, int yearx, int dayy, int monthy, int yeary)
{
	return dayx - dayy, monthx - monthy, yearx - yeary;
}

int main()
{
	int dayx=0, int monthx=0, int yearx=0, int dayy=0, int monthy=0, int yeary=0;
	
	cout << "Enter date1 /day/month/year ->";
	cin >> dayx, monthx, yearx;

	cout << "Enter date1 /day/month/year ->";
	cin >> dayy, monthy, yeary;

	for (int dayx = 0; dayx < 32; dayx++)
	{
		cout << dayx << "\t"; 
	}
	for (int monthx = 0; monthx < 13; monthx++)
	{
		cout << monthx << "\t";
	}
	for (int yearx = 0; yearx < 3000; yearx++)
	{
		if (yearx % 4 == 0)
		{
			cout << yearx << "\t";
		}
	}

	for (int dayy = 0; dayy < 32; dayy++)
	{
		cout << dayy << "\t";
	}
	for (int monthy = 0; monthy < 13; monthy++)
	{
		cout << monthy << "\t";
	}
	for (int yeary = 0; yeary < 3000; yeary++)
	{
		if (yeary % 4 == 0)
		{
			cout << yeary << "\t";
		}
	}
	
       Difference(dayx, monthx, yearx, dayy, monthy, yeary);

	cout << endl; 

	return 0;
}

