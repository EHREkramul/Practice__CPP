/* Write a C++ Program to find Cube Root of a Number */
#include<iostream>
#include<cmath>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n;
    cout<< "Enter any integer positive number :: "; cin>> n;

    double root= pow(n, (1/3.00));

    cout<< "\nCube Root is : " << root <<endl;
    cout<< "Cube Root is : " << cbrt(n) <<endl;

    return 0;
}