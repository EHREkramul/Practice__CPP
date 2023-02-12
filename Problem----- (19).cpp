/* C++ Program to Check whether a year is Leap year or not */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int y;
    cout<< "Enter an Year :: "; cin>> y;

    if (y%4==0 && y%100!=0){
        
        cout<<endl
            << "Entered Year " <<y<< " is Leap Year" <<endl;
    }

    else if (y%400==0){

        cout<<endl
            << "Entered Year " <<y<< " is Leap Year" <<endl;
    }
    else{

        cout<<endl
            << "Entered Year is not a Leap Year" <<endl;
    }
    

    return 0;
}