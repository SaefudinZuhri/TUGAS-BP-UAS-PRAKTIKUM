#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
  int i,j;
         int data[2][5] = {{10, 20, 40, 50, 20},{40, 20, 60, 20, 70}};
   for(i=0;i<2;i++)
   {
    for(j=0;j<5;j++)
      {
         cout<<data[i][j];
          cout<<" ";
      }
      cout<<endl;
   }
   getch();

}

