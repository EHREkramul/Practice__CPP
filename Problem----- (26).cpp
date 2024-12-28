/* C++ Program to Reverse a Number using while loop */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n;
    cout<< "Enter any positive Number :: "; cin>> n;

    int temp= n;
    cout<< "\nReverse Number is : ";
    while (temp!=0)
    {
        int rem= temp%10;
        cout<< rem;
        temp= temp/10;
    }
    

    return 0;
}