#include <iostream>
#include <cmath>
using namespace std; 

/*�������� 1. �������� �������, ��� ������ ��� ���������: ������ ������� � �������� �������, �� �������� 
������ ����� �� ����� ��������� �����
*/

double power(double x, int y) 
{

	return pow(x, y);

}
int main()
{
	double x = 2;
	int y=3;
	
	cout << "The result is " << power (x, y) << endl;
	return 0; 
}