//const function
#include <iostream>
#include <conio.h>
using namespace std;

class sample
{
      public:
            const int a;
             public:
             void disp() 
             {
                  cout<<a;
                  }
                  };

main()
{
      sample s;
     s.a=10;
      s.disp();
      getch();
      }
      
