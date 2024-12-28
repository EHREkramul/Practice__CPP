/* C++ Program to Check whether given number is Even or Odd */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int num;
    cout<< "Enter an integer number :: "; cin>> num;

    if (num%2==0){
        cout<<endl<< "Entered Number ["<<num<<"] is Even" <<endl;
    }
    else{
        cout<<endl<< "Entered Number ["<<num<<"] is Odd" <<endl;
    }
    

    return 0;
}