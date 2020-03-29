#include <iostream.h>
#include <conio.h>
using namespace std;

class abc
{
      public:
             static int a;
             void displayvalue()
             {
                  cout<<"\n The static variable value is "<<a;
                  }
                  void x()
                  {
                       cout<<"\n The static variable value is "<<a;
                   }
};
int abc::a;
                  main()
                  {
                        abc ts1;   //when the first obj is created it is ini to 0
                        ts1.displayvalue();
                        abc :: a=100; //accessing using class
                        ts1.displayvalue();
                        ts1.a=10;
                        ts1.displayvalue();//ACCESSING USING OBJECT NAMES
                        getch();
                        }
                  
