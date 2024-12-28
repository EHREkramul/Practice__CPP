/* C++ Program to find Factorial of a Number using Recursion and Loop */
#include<iostream>
using namespace std;

int factorial(int);
int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    /* Using Loop */
    /* int n, fact=1;
    cout<< "Enter an integer number :: "; cin>> n;

    for (int i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    cout<<endl
        << "Factorial of " << n << " is : "<< fact <<endl; */

    /* Using Recursion */

    int n;
    cout<< "Enter an integer :: "; cin>> n;

    cout<<endl
        << "Factorial of " << n << " is : "<< factorial(n) <<endl;

    return 0;
}

int factorial(int n)
{
    static int fact= 1;
    for (int i=1; i<=n; i++)
    {
        fact= factorial(fact*i);
    }
        
}