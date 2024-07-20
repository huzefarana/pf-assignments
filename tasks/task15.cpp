// Given tax brackets and given employee gross salaries, determine those employees who actually get less take home salary
// than others with lower initial income.

// TAX BRACKETS
// 0-5,000 No tax
// 5,001-10,000 5%
// 10,001-20,000 10%
// 20,001 - and more 15%

// Example

// Net Salary: 10,000
// Tax = 5% of 10,000 = 500
// Net Amount after deduction = 10,000 - 500 = 9,500

// Net Salary: 10,001
// Tax = 10% of 10,001 = 1,000.1
// Net Amount after deduction = 10,001 - 1,000.1 = 9,000.9

#include <iostream>
using namespace std;

void getInput(double[][2], int);
void calcNetSal(double sal[][2], int numEmps);
void findUnluckies(double sal[][2], int lucky[], int numEmps);
void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBond, int empNbr);
void printUnluckies(int lucky[], int numEmps, double sal[][2]);

int main()
{
    const int arrSize = 100;
    double sal[arrSize][2];
    int lucky[arrSize] = {0};
    int numEmps;
    cout << "Please enter the number of employees: ";
    cin >> numEmps;
    cout << '\n';
    /* Read the gross salaries of the employees into the array 'sal' */
    getInput(sal, numEmps);
    /* Calculate net salaries of the employees and store them in the array */
    cout << "\n\n Calculating the net salaries ... ";
    calcNetSal(sal, numEmps);
    /* Find the unlucky employees */
    cout << "\n\n Locating the unlucky employees ... ";
    findUnluckies(sal, lucky, numEmps);
    /* Print the unlucky employee numbers */
    cout << "\n\n Printing the unlucky employees ... \n";
    printUnluckies(lucky, numEmps, sal);
}

void getInput(double sal[][2], int numEmps)
{
    for (int i = 0; i < numEmps; i++)
    {
        cout << "Please enter the gross salary for employee No." << i + 1 << ": ";
        cin >> sal[i][0];
    }
}

void calcNetSal(double sal[][2], int numEmps)
{
    for (int i = 0; i < numEmps; i++)
    {
        if (sal[i][0] <= 5000)
        {
            sal[i][1] = sal[i][0];
        }
        else if (sal[i][0] > 5000 && sal[i][0] <= 10000)
        {
            sal[i][1] = sal[i][0] - (sal[i][0] * 0.05);
        }
        else if (sal[i][0] > 10000 && sal[i][0] <= 20000)
        {
            sal[i][1] = sal[i][0] - (sal[i][0] * 0.1);
        }
        else
        {
            sal[i][1] = sal[i][0] - (sal[i][0] * 0.15);
        }
    }
}

void findUnluckies(double sal[][2], int lucky[], int numEmps)
{
    for (int i = 0; i < numEmps; i++)
    {
        if (sal[i][0] >= 0 && sal[i][0] <= 5000)
        {
            // No need to check for unclucky employees for this tax bracket
        }
        else if (sal[i][0] >= 5001 && sal[i][0] <= 10000)
        {
            markIfUnlucky(sal, numEmps, lucky, 5001, i);
        }
        else if (sal[i][0] >= 10001 && sal[i][0] <= 20000)
        {
            markIfUnlucky(sal, numEmps, lucky, 10001, i);
        }
        else if (sal[i][0] >= 20001)
        {
            markIfUnlucky(sal, numEmps, lucky, 20001, i);
        }
    }
}

void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNbr)
{
    for (int i = 0; i < numEmps; i++)
    {
        if (sal[i][0] < upperBound && sal[i][1] >= sal[empNbr][1])
        {
            "here 3";
            lucky[empNbr] = 1;
            break;
        }
    }
}

void printUnluckies(int lucky[], int numEmps, double sal[][2])
{
    for (int i = 0; i < numEmps; i++)
    {
        if (lucky[i] == 1)
        {
            cout << "\nEmployee No: " << i + 1 << " with gross salary " << sal[i][0] << " and net salary " << sal[i][1] << endl;
        }
    }
}