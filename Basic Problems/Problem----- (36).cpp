/* C++ Program to find Sum of Digits of a Number using while loop */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n, sum=0, rem;
    cout<< "Enter any positive number :: "; cin>> n;

    int t=n;
    while (t!=0)
    {
        rem= t%10;
        sum= sum + rem;
        t=t/10;
    }

    cout<< "\n\nSum of Numbers is : " << sum <<endl;
    

    return 0;
}