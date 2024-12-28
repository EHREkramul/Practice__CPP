/* C++ Program to Find Sum and Average of n numbers using for loop */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n, sum=0;
    cout<< "Enter amount of number :: "; cin>> n;
    int array[n];
    double avg;

    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<< "Enter Number-" <<i+1<< " :: "; cin>> array[i];
        sum= sum + array[i];
    }
    avg= double(sum)/n;

    cout<< "\n\nSum of [ " <<n<< " ] numbers : " << sum <<endl;
    cout<< "\n\nAverage of [ " <<n<< " ] numbers : " << avg <<endl;

    return 0;
}