/* �������� 2. �������� �������, ��� ������ � ����� 
��������� 2 ����� ����� �� ������� ���� ����� �� �������� �� ����*/

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