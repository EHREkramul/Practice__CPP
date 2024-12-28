/* Write a C++ Program to Calculate Compound Interest */
#include<iostream>
#include<cmath>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    double money, rate;
    int year;
    cout<< "Enter the main amount of money : "; cin>> money;
    cout<< "Enter the interest rate : "; cin>> rate;
    cout<< "Enter the time period : "; cin>> year;

    double Compound_Interest= money*pow((1+(rate/100)), year);

    cout<<endl<< "Total Compound Interest is: " << Compound_Interest <<endl;

    return 0;
}