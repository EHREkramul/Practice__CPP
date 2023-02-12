/* C++ program to Find Largest of three numbers using nested if */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n1, n2, n3;
    cout<< "Enter First Number :: "; cin>> n1;
    cout<< "Enter Second Number :: "; cin>> n2;
    cout<< "Enter Third Number :: "; cin>> n3;

    if(n1!=n2 && n2!=n3 && n1!=n3)
    {
        if(n1>n2 && n1>n3)
        {
            cout<< "\nFirst Number [ " <<n1<< " ] is The Largest Number" <<endl;
        }
        else if(n2>n1 && n2>n3)
        {
            cout<< "\nSecond Number [ " <<n2<< " ] is The Largest Number" <<endl;
        }
        else
        {
            cout<< "\nThird Number [ " <<n3<< " ] is The Largest Number" <<endl;
        }
    }

    return 0;
}