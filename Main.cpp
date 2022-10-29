// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com


#include <iostream>


using namespace std;

//Завдання 1. Написати функцію, яка приймає дві дати
//(тобто функція приймає шість параметрів) та обчислює
//різницю в днях між цими датами.Для виконання цього
//завдання необхідно також написати функцію, яка визначає, чи є рік високосним.

bool LeapYear(int year)
{
    bool res = false;
    if (year % 4 == 0)
        res = true;
    if (year % 100 == 0)
        res = false;
    if (year % 400 == 0)
        res = true;
    return res;
}
int Date(int d, int m, int y)
{
    int i = d;
    if (LeapYear(y) && (m > 2))
        i += y * 366;
    else i += y * 365;
    switch (m - 1)
    {
    case 12: i += 31;
    case 11: i += 30;
    case 10: i += 31;
    case  9: i += 30;
    case  8: i += 31;
    case  7: i += 31;
    case  6: i += 30;
    case  5: i += 31;
    case  4: i += 30;
    case  3: i += 31;
    case  2: i += 28;
    case  1: i += 31;
    }
    return i;
}
int difference(int day1, int day2, int mon1, int mon2, int year1, int year2)
{
    int i = Date(day2, mon2, year2) - Date(day1, mon1, year1) + 1;
    return i;
}

int main()
{
    bool res; 
    int i, day1, day2;
    int mon1; int mon2; int year1;  int year2; 
    
    bool LeapYear(int year); 
    int Date(int d, int m, int y); 
    int difference(int day1, int day2, int mon1, int mon2, int year1, int year2); 
	
    cout << "Enter day1 ->";
	cin >> day1;

    cout << "Enter month1 ->";
    cin >> mon1;

    cout << "Enter year1 ->";
    cin >> year1;
    cout << "This is a leap year? -> " << LeapYear << endl; 

	cout << "Enter day2 ->";
	cin >> day2;

    cout << "Enter month2 ->";
    cin >> mon2;

    cout << "Enter year2 ->";
    cin >> year2;
    cout << "This is a leap year? -> " << LeapYear << endl;

    cout << "The difference is -> " << difference << endl;
 
	return 0;
}

