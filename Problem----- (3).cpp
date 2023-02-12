/*  C++ Program to Find Quotient and Remainder of 2 numbers */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int dividend, divisor ;
    cout<< "Enter Dividend  Number :: "; cin>> dividend;
    cout<< "Enter Divisor  Number :: "; cin>> divisor ;

    double quotient= double(dividend) / divisor ;
    int remainder= dividend % divisor ;

    cout<<endl<< "Quotient of Two Numbers [" <<dividend<<" / "<<divisor <<"] = " << quotient <<endl;
    cout<< "Remainder of Two Numbers ["<<dividend<<" % "<<divisor <<"] = " << remainder <<endl;

    return 0;
}