/* C++ Program to Generate Fibonacci Series for N numbers */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n, n1, n2;
    cout<< "Enter the end of range :: "; cin>> n;

    n1= 0, n2=1;
    cout<< "Fibonacci Series : 0 1 ";
    for (int i=2; i<n; i++)
    {
        int sum= n1 + n2;
        n1= n2;
        n2= sum;
        cout<< sum << " ";
    }

    return 0;
}