/*Завдання 3. Число називається досконалим, якщо сума 
всіх його дільників дорівнює йому самому. Напишіть 
функцію пошуку таких чисел у введеному інтервалі.*/

#include <iostream>
using namespace std; 

int Function(int x) {

    int sum = 1;
    for (int i = 2; i * i <= x; i++) {

        if (x % i == 0) {

            sum += i;

            if (i * i!= x) {

                sum += x/i;

            }

        }

    }

    return sum == x && x != 1;
}

void Numbers(int a, int b) {
    for (int i = a; i <= b; i++) {

        if (Function(i)) {

            cout << i << " ";
        }
    }
}

int main() {

    int x, a{}, b{};

    cout << "Enter x -> ";
    cin >> x; 


    Function(x); 
    Numbers(a, b); 

	return 0; 
}