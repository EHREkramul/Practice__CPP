/* C++ Program to convert inches to feet yards and inches */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    double inc;
    cout<< "Enter Length in inches here :: "; cin>> inc;

    double foot= inc/12;
    cout<<endl<< "Inches in Foot is : " << foot<<endl;

    double yard= foot/3;
    cout<<endl<< "Foot in Yard is : "<< yard<<endl;

    double inches= yard*36;
    cout<<endl<< "Yard in Inches is : "<< inches << endl;

    return 0;
}