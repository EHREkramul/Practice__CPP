/* C++ Program to Find Sum and Average of three numbers */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int num1, num2, num3;
    cout<< "Enter 1st integer number :: "; cin>> num1;
    cout<< "Enter 2nd integer number :: "; cin>> num2;
    cout<< "Enter 3rd integer number :: "; cin>> num3;

    int sum= num1 + num2 + num3;
    cout<<endl<< "Sum of three Numbers ["<<num1<<"+"<<num2<<"+"<<num3<<"] = "<< sum <<endl;

    double avg= sum/3.00;
    cout<< "Average of three Numbers ["<<sum<<"/3] = "<< avg <<endl;

    return 0;
}