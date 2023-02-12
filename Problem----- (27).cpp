/* C++ Program to Find the Number of Digits in a number */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n, rem;
    cout<< "Enter any positive Number :: "; cin>> n;

    int temp= n, count=0;
    while (temp!=0)
    {
        temp= temp/10;
        count++;
    }
    cout<< "\nTotal number of digits in this number : " << count <<endl;
    

    return 0;
}