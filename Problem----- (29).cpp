/* C++ Program to Check whether a Number is Armstrong or not */
#include<iostream>
#include<cmath>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n;
    cout<< "Enter any positive Number :: "; cin>> n;

    int temp= n, rem, count=0, dgt[100], arm=0;
    while (temp!=0)
    {
        rem= temp%10;
        dgt[count]= {rem};
        temp= temp/10;
        count++;
    }
    cout<< "\nYour Entered Number has : " << count << " digits"<<endl;

    cout<< "\nYou've Entered : ";
    int power= count;
    for(int i= count-1; i>=0; i--)
    {
        cout<< dgt[i];
        arm= arm + pow(dgt[i], power);
    }

    if(arm==n)
    {
        cout<< "\n\nEntered number [ " <<n<< "] is an Armstrong Number" <<endl;
    }
    else
    {
        cout<< "\n\nEntered number [ " <<n<< "] is not an Armstrong Number" <<endl;
    }


    return 0;
}