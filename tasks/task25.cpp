// write a program that demonstrates the use of templates and function overloading.
#include <iostream>
using namespace std;

template <class T>
void custom_swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1 = 3;
    int num2 = 4;
    double a = 3.42;
    double b = 2.42;
    char char1 = 'a';
    char char2 = 'b';
    custom_swap(char1, char2);
    custom_swap(a, b);
    custom_swap(num1, num2);
    cout << char1 << " " << char2 << endl;
    cout << num1 << " " << num2 << endl;
    cout << a << " " << b << endl;
}
