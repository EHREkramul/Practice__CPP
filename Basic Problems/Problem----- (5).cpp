/* C++ Program to Find Size of int(short+long), float, double(long), bool and Char data types */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int i= 10;
    float f= 20.7;
    double d= 30.8734564875673;
    char c= 'c';
    bool b=true;

    short int si= 10;
    long int li= 19;
    long double ld= 30.8734564875673;

    //short/long float/char will create error
    // short double will create error not long double

    // All size will display in form of byte
    cout<<endl<< "Size of integer : "<< sizeof(int) <<endl;
    cout<< "Size of float : "<< sizeof(float) <<endl;
    cout<< "Size of double : "<< sizeof(double) <<endl;
    cout<< "Size of character : "<< sizeof(char) <<endl;
    cout<< "Size of boolean : "<< sizeof(bool) <<endl;

    cout<<endl<< "Size of integer : "<< sizeof(i) <<endl;
    cout<< "Size of float : "<< sizeof(f) <<endl;
    cout<< "Size of double : "<< sizeof(d) <<endl;
    cout<< "Size of character : "<< sizeof(c) <<endl;
    cout<< "Size of boolean : "<< sizeof(b) <<endl;


    cout<<endl<< "Size of integer : "<< sizeof(10) <<endl;
    cout<< "Size of by default double : "<< sizeof(20.7) <<endl;    //showing size of double // Because, if nothing is mentioned in a fractional number. Then it is by default double type
    cout<< "Size of by default double : "<< sizeof(30.8734564875673) <<endl;
    cout<< "Size of character : "<< sizeof('c') <<endl;
    cout<< "Size of boolean : "<< sizeof(true) <<endl;


    cout<<endl<< "Size of integer : "<< sizeof(10) <<endl;
    cout<< "Size of float : "<< sizeof(20.7f/* f==F */) <<endl; //showing size of float // Because, I've mentioned it's float, by adding f at the end of the fractional number
    cout<< "Size of float : "<< sizeof(20.75645564654654654F/* F==f */) <<endl; //showing size of float // Because, I've mentioned it's float, by adding F at the end of the fractional number
    cout<< "Size of character : "<< sizeof('c') <<endl;

    cout<<endl<< "Size of short integer : "<< sizeof(si) <<endl;
    cout<< "Size of long integer : "<< sizeof(li) <<endl; // integer long and normal integer are same in size
    cout<< "Size of long double : "<< sizeof(ld) <<endl;
    cout<< "Size of long double : "<< sizeof(15.465l) <<endl; //l or L means long double
    cout<< "Size of long double : "<< sizeof(15.465L) <<endl; //l or L means long double




    return 0;
}