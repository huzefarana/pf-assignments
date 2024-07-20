//Write a program to find out the greatest and the smallest among three numbers using pointers

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Please enter three inetgers: ";
    cin >> num1 >> num2 >> num3;
    int *num1Ptr = &num1;
    int *num2Ptr = &num2;
    int *num3Ptr = &num3;
    if (*num1Ptr > *num2Ptr && *num1Ptr > *num3Ptr)
    {
        cout << "The greatest number is: " << *num1Ptr << "\n";
    }
    else if (*num2Ptr > *num1Ptr && *num2Ptr > *num3Ptr)
    {
        cout << "The greatest number is: " << *num2Ptr << "\n";
    }
    else
    {
        cout << "The greatest number is: " << *num3Ptr << "\n";
    }
    return 0;
}