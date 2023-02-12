/* C++ Program to Print Pattern*/
/*
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 */

#include<iostream>
using namespace std;

void triangle(int n)
{
    for (int r=1; r<=n; r++)
    {
        for (int c=1; c<=n; c++)
        {
            cout<< " * ";
        }
        cout<<endl;
    }
}

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; //My Program Headline

    int n;
    cout<< "Enter the size of triangle :: "; cin>> n;

    triangle(n);

    return 0;
} 

/* 
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 */
/*
#include<iostream>
using namespace std;

void triangle(int n)
{
    for (int r=1; r<=n; r++)
    {
        for (int c=1; c<=r; c++)
        {
            cout<< " * ";
        }
        cout<<endl;
    }
}

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; //My Program Headline

    int n;
    cout<< "Enter the size of triangle :: "; cin>> n;

    triangle(n);

    return 0;
}
*/
/* 
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
 */

/* #include<iostream>
using namespace std;

void triangle(int n)
{
    for (int r=1; r<=n; r++)
    {
        for (int c=n; c>=r; c--)
        {
            cout<< " * ";
        }
        cout<<endl;
    }
}

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; //My Program Headline

    int n;
    cout<< "Enter the size of triangle :: "; cin>> n;

    triangle(n);

    return 0;
}
 */
/* 
         *
       * *
     * * *
   * * * *
 * * * * *
 */

/* #include<iostream>
using namespace std;

void triangle(int n)
{
    int t=n;
    for (int r=1; r<=n; r++)
    {
        for (int c=1; c<=n; c++)
        {
            
            if(c<t)
            {
                cout<< "  ";
            }
            else
            {
                cout<< " *";
            }
        }
        cout<<endl;t--;
    }
}

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; //My Program Headline

    int n;
    cout<< "Enter the size of triangle :: "; cin>> n;

    triangle(n);

    return 0;
} */

/* 
 * * * * *
   * * * *
     * * *
       * *
         *
 */

/* #include<iostream>
using namespace std;

void triangle(int n)
{
    int t=1;
    for (int r=1; r<=n; r++)
    {
        for (int c=1; c<=n; c++)
        {
            
            if (c<t)
            {
                cout<< "  ";
            }
            else
            {
                cout<< " *";
            }
        }
        cout<<endl;t++;
    }
}

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; //My Program Headline

    int n;
    cout<< "Enter the size of triangle :: "; cin>> n;

    triangle(n);

    return 0;
} */