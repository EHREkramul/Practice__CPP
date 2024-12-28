/* C++ Program to Convert Days Into Years Weeks and Days */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int day;
    cout<< "Enter No. of days :: "; cin>> day;

    int years= (day/365);

    day-= (years*365); // or day=day%365;
    int weeks= (day/7);
    day-= (weeks*7); // or day=day%7;

    cout<<endl<<endl<< "No. of Years : "<< years <<endl;
    cout<< "No. of Weeks : "<< weeks <<endl;
    cout<< "No. of Days  : "<< day <<endl;

    return 0;
}