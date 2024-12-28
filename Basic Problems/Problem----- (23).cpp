/* C++ Program to Check a number is Prime or not */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n;
    cout<< "Enter an integer Number :: "; cin>> n;

    if(n<=1)
    {
        cout<<endl
            << "Entered Number [ " <<n<< " ] is not a Prime Number" <<endl;
    }
    else if(n==2)
    {
        cout<<endl
            << "Entered Number [ " <<n<< " ] is a Prime Number" <<endl;
    }
    else
    {
        int temp=-313;
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                temp++;
            } 
        }
        if(temp==-313)
        {
            cout<<endl
                << "Entered Number [ " <<n<< " ] is a Prime Number" <<endl;
        }
        else
        {
            cout<<endl
                << "Entered Number [ " <<n<< " ] is not a Prime Number" <<endl;
        }
    }
    
    return 0;
}