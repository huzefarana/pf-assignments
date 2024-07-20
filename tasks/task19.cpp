//Write a program to find the factorial of a number using pointers.
#include<iostream>
using namespace std;
int main()
{   
    int num;
    cout << "Please enter any inetger: ";
    cin >> num;
    int *numPtr = &num;
    int fact = 1;
    for(int i = 1; i <= *numPtr; i++)
    {
        fact *= i;
    }
    cout << "The factorial of " << *numPtr << " is: " << fact << "\n";
    return 0;
}
