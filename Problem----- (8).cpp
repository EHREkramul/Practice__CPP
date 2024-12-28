/* C++ Program to Generate Random Numbers between 0 and 100 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{cout<< "\n\t\t\tName:\tEKRAMUL HAQUE\n\n\n\n"; /*My Program Headline*/

    cout<< "Random Numbers are: ";

    for (int i= 0; i<5; i++){
        int randomNumber = rand()%100 +0; //+starting range and %end of range
        cout<< randomNumber << " ";
    }

    return 0;
}