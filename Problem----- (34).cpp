/* Write a C++ program to find Square Root of a Number */
#include<iostream>
#include<cmath>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n;
    cout<< "Enter any integer positive number :: "; cin>> n;

    double root= pow(n, 0.5);

    cout<< "\nSquare Root is : " << root <<endl;
    cout<< "Square Root is : " << sqrt(n) <<endl;

    return 0;
}