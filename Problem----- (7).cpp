/* C++ Program to Display ASCII Value of a Character */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    char ch;
    cout<< "Enter a character :: "; cin>> ch;

    cout<<endl<< "The ASCII Value of Your Entered character is : "<< (ch+1)-1 <<endl;
    cout<<endl<< "The ASCII Value of Your Entered character is : "<< int(ch) <<endl; //Typecasting and converting char to int
    cout<<endl<< "The ASCII Value of Your Entered character is : "<< (float)ch <<endl; //Typecasting and converting char to float
    cout<<endl<< "The ASCII Value of Your Entered character is : "<< (double)ch <<endl; //Typecasting and converting char to double

    return 0;
}