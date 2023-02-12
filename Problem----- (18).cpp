/* C++ Program to Check Character is Uppercase, Lowercase, Digit or Special */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    char ch;
    cout<< "Enter a character here :: "; cin>> ch;
    int c= int(ch);

    if (c>=48 && c<=57){
        cout<<endl
            << "Entered Character " <<ch<< " is a digit" <<endl;
    }

    else if (c>=65 && c<=90){

        cout<<endl
            << "Entered Character " <<ch<< " is an Uppercase Character" <<endl;
    }

    else if (c>=97 && c<=122){

        cout<<endl
            << "Entered Character " <<ch<< " is a Lowercase Character" <<endl;
    }
    else{

        cout<<endl
            << "Entered Character [ " <<ch<< " ] is an Special Character" <<endl;
    }

    return 0;
}