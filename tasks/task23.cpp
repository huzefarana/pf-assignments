//write a program that prints the adderss of a variable and its reference.

#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    int z = 4;
    int &y = num;
    cout << y  << endl;
    cout << &y  << endl;
    y = z;
    cout << y << endl;
    cout << &y << endl;
    return 0;
}

// refrecnce need to assigne a value at the time of declaration
// refrecnce can not be null
// refrecnce can not be reassigne

//This is how it is different from pointers.