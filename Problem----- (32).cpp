/*  C++ Program to Calculate HCF of Two Numbers using Functions  */
#include<iostream>
using namespace std;

void HCF(int a, int b)
{
    int n1=a, n2= b;

    int count=0, count2=0, Fcount=0, array1[100], array2[100], Farray[100];
// Getting elements for number 1
    for(int i= 1; i<=n1; i++)
    {
        if (n1%i==0)
        {
            array1[count]= {i};
            count++;
        }
    }

// Printing Number 1 elements
    cout<< "\nFactors of Number 1 : ";
    for (int i= 0; i<=count; i++)
    {
        cout<< array1[i]<< " ";
    }

// Getting elements for number 2
    for(int j= 1; j<=n2; j++)
    {
        if (n2%j==0)
        {
            array2[count2]= {j};
            count2++;
        }
    }

// Printing elements for Number 2
    cout<< "\nFactors of Number 2 : ";
    for (int i= 0; i<count2; i++)
    {
        cout<< array2[i]<< " ";
    }

// Get the common elements among two
    for(int k= 0; k<count; k++)
    {
        for (int m= 0; m<count; m++)
        {
            if (array1[k]==array2[m])
            {
                Farray[Fcount]= {array1[k]};
                Fcount++;
            }
        }
    }
// Get the largest one
    int max= Farray[0];
    for (int l= 1; l<Fcount; l++)
    {
        if (max<Farray[l])
        {
            max=Farray[l];
        }
    }

//Printing final one
    cout<< "\n\n\nH.C.F of [ " <<n1<< " ] and [ " <<n2<< " ] is :: " << max <<endl;

}

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    int n1, n2;
    cout<< "Enter number 1 :: "; cin>> n1;
    cout<< "Enter number 2 :: "; cin>> n2;

    HCF(n1, n2);

    
    return 0;
}





/* #include<iostream>
using namespace std;

void gcd(int,int);

int main()
{
    int a,b;

    cout<<"Enter 1st number :: ";
    cin>>a;
    cout<<"\nEnter 2nd number :: ";
    cin>>b;

    gcd(a,b);

  return 0;
}

//function to calculate g.c.d
void gcd(int a,int b)
{
    int m,n;

    m=a;//30
    cout<<m<<endl;
    n=b;//12
    cout<<n<<endl;

    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }

    cout<<"\nH.C.F of [ "<<a<<" ] and [ "<<b<<" ] is :: "<<m<<"\n";
} */