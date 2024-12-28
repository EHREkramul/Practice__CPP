/* C++ Program to Find Power of a Number using for loop */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int base, pow, result=1;
    cout<< "Enter the base number :: "; cin>> base;
    cout<< "Enter Power of Base [ " <<base<< " ] :: "; cin>> pow;

    for (int i=1; i<=pow; i++)
    {
        result= result * base;
    }

    cout<< "\n\nPower of a [ " <<base<< " ] :: " << result <<endl;

    return 0;
}