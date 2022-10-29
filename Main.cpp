#include <iostream>
#include <cmath>
using namespace std; 

/*Завдання 1. Написати функцію, яка приймає два параметри: основа степеня і показник степеня, та обчислює 
степінь числа на основі отриманих даних
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