// write a program that uses a 1D array to store 10 numbers and then calculate the sum of squares of those numbers.

#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int sumOfSquares = 0;
    int i = 0;

    cout << "Please enter 10 numbers one by one" << "\n";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        sumOfSquares = sumOfSquares + a[i] * a[i];
    }
    cout << "The sum of squares is " << sumOfSquares << "\n";
}