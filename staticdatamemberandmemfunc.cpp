//static datamem and static mem func
//they do not posses this pointer
//they cannot be virtual 
//they cannot be dec either const or volatile
#include <iostream.h>
#include <conio.h>
using namespace std;

class abc
{
      public:
             //static datamem and static mem func
//they do not posses this pointer
//they cannot be virtual 
//they cannot be dec either const or volatile
#include <iostream.h>
#include <conio.h>
using namespace std;

class abc
{
      public:
             static int a;
             static void displayvalue()
             {
                  cout<<"\n The static variable value is "<<a;//static member func can access only static data mem
                  }
};
int abc::a;
                  main()
                  {
                        abc ts1,ts2;
                        ts1.a=20;  //when the first obj is creatted it is ini to 0
                        ts1.displayvalue();
                        ts2.a=90;
                           ts2.displayvalue();
                        
                        abc :: a=100; //accessing using class
                        abc::displayvalue();
                        getch();
                        }
