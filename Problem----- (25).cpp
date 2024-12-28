/* C++ program to Print Multiplication Table of a given number */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n;
    cout<< "Enter integer you want the table :: "; cin>> n;

    for (int i = 1; i <= 10; i++)
    {
        int mul= n*i;
        cout<< "\n5 x " << i << " = " << mul;
    }
    

    return 0;
}