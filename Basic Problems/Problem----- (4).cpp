/*  C++ Program to Swap Two Numbers without using third variable */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int num1, num2;

    cout<< "Enter Number 1 :: "; cin>> num1;
    cout<< "Enter Number 2 :: "; cin>> num2;

    cout<<endl;
    cout<< "Numbers Before Swaping........." <<endl;
    cout<< "Number 1 = " <<num1<< "   Number 2 = "<<num2<<endl;


    num1= num1 + num2;
    num2= num1 - num2;
    num1= num1 - num2;

    cout<<endl<< "Numbers After Swaping........." <<endl;
    cout<< "Number 1 = " <<num1<< "   Number 2 = "<<num2<<endl;

    return 0;
}