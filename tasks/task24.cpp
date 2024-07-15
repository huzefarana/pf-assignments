//write a program that demonstrates the use of setw, setfill, hex, oct, and dec manipulators.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 40;
    cout << setfill('*') << setw(10)  << "  " <<  "RESULT" << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
    cout << dec << num << endl;
    return 0;
}
