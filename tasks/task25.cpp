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
    int x = 3;
    int y = 4;
    double a = 3.42;
    double b = 2.42;
    custom_swap(a, b);
    custom_swap(x, y);
    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
}
