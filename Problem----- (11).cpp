/* C++ Program to raise any number X to power N */
#include<iostream>
#include<cmath>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int X, N;

    cout<< "Enter the value of N : "; cin>> N;
    cout<< "Enter the value of X : "; cin>> X;

    int result= pow(N, X);

    cout<< "The result ["<<N<<"^"<<X<<"] = "<< result <<endl;

    return 0;
}