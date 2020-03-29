//MUTABLE DATA MEMBERS
#include <iostream.h>
#include <conio.h>
using namespace std;

class sample
{
      public:
            mutable  int a;
             void disp() const
             {
                  cout<<++a;
                  }
                  };

main()
{
      sample s;
      s.a=10;
      s.disp();
      getch();
      }
