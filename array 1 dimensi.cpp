#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 int nilai[5] = {3, 7, 5, 6, 2};
        int i;
   for(i=0; i<5; i++)
   {
     cout<<"Nilai Array Index ke - "<<i<<" = ";
                cout<<nilai[i]<<endl;
    }
   getch();
}
