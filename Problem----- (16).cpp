/* C++ program to Find Cube of Number using MACROS */
#include<iostream>
#define Cube(n) {n*n*n}
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    double num;
    cout<< "Enter Number here : "; cin>> num;

    double result= Cube(num);

    cout<< "The Result is : " << result <<endl;

    return 0;
}