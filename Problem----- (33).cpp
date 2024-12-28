/*  C++ program to find LCM of two numbers using functions  */
#include<iostream>
using namespace std;

void LCM(int a, int b)
{
    int c1=0, c2=0, array1[500], array2[500], tempo=-313;

    for (int i= 1; i<=50; i++)
    {
        array1[c1]= a*i;
        c1++;
        array2[c2]= b*i;
        c2++;
    }

    int Farray[100], cf=0;
    for (int i= 0; i<c1; i++)
    {
        for (int j=0; j<c1; j++)
        {
            if (array1[i] == array2[j])
            {
                Farray[cf]= {array1[i]};
                cf++;
                tempo++;

            }
        }
    }
    int min= Farray[0];

    if(tempo==-313)
    {
        min=a*b;
    }
    else
    {
        for (int i=1; i<cf; i++)
        {
            if (min>Farray[i])
            {
                min= Farray[i];
            }
        }
    }


    cout<< "\n\n\nL.C.M of [ " <<a<< " ] and [ " <<b<< " ] is :: "<< min <<endl;
}

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n1, n2;
    cout<< "Enter Number 1 :: "; cin>> n1;
    cout<< "Enter Number 2 :: "; cin>> n2;

    LCM(n1, n2);

    return 0;
}






/* #include<iostream>
using namespace std;

void lcm(int,int);

int main()
{
    int a,b;

    cout<<"Enter 1st number :: ";
    cin>>a;
    cout<<"\nEnter 2nd number :: ";
    cin>>b;

    lcm(a,b);

  return 0;
}

//function to calculate l.c.m
void lcm(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m < n)
        {
        m=m+a;
        }
        else
        {
            n=n+b;
            }
    }

    cout<<"\nL.C.M of [ "<<a<<" ] and [ "<<b<<" ] is :: "<<m<<"\n";
} */