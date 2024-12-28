/* C++ Program to Check Whether a character is Vowel or Consonant */
#include<iostream>
using namespace std;

int main(){cout<<"\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    char ch;
    cout<< "Enter a character :: "; cin>> ch;

    char chh=ch;
    ch=tolower(ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){

        cout<< "Entered Character [ " <<chh<< " ] is Vowel" <<endl;
    }
    else{
        cout<< "Entered Character [ " <<chh<< " ] is Consonant" <<endl;
    }

    return 0;
}