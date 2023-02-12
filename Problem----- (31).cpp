/* C++ program to Check whether a number is palindrome or nt */
#include <iostream>
using namespace std;

int main()
{cout << "\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int rem,no,b,temp=0;

    cout<<"Enter any positive number :: ";
    cin>>no;

    b=no;

    while(no>0)
    {
        rem=no%10;
        no=no/10;
        temp=temp*10+rem;
    }

    if(temp==b)
    {
        cout<<"\nThe Number [ "<<b<<" ] is Palindrome.\n";
    }
    else
    {
        cout<<"\nThe Number [ "<<b<<" ] is Not Palindrome.\n";
    }

    return 0;
}