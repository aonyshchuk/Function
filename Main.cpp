/*Завдання 3. Написати функцію, що визначає кількість
додатних, від'ємних і нульових елементів переданого їй 
масиву.*/

#include<iostream>
#include <cmath>

using namespace std; 

int Elements(int arr[], int size, int positive, int negative, int neutral)
{

    for (int i = 0; i < size; i++) {

        if (arr[i] > 0) {

            positive++;

        }
        else if (arr[i] < 0) {

            negative++;

        }
        else {

            neutral++;

        }
    }

    return positive, negative, neutral; 
}



    int main()
    {
        int size = 10; 
        int arr[10]{ 1,4,3,-6,-8,0,10,12,19,11 }; 
     
        int positive{}, negative{}, neutral{}; 
       
        int Elements(int arr[10], int size, int positive, int negative, int neutral);

        cout << "Number of positive elements-> " << positive << endl;
        cout << "Number of negative elements-> " << negative << endl;
        cout << "Number of zero elements-> " << neutral << endl;

    
        return 0; 
    }
