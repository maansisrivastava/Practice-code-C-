#include <iostream.h>
#include <conio.h>
using namespace std;
    
void dummy()
{
      static int i=10;
     int j=20;
     i=i+10;
     j=j+5;
     cout<<"The value of i is : "<<i<<"\n"<<"and j is :"<<j<<endl;
     }
     
     main()
     {
           dummy();
           dummy();
           getch();
           }
