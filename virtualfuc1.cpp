#include <iostream.h>
#include <conio.h>
using namespace std;
class shape
{
      public:
             virtual void draw()
             {
                     cout<<"Shape is drawn"<<endl;
                     }
                     };
class circle:public shape
{
      public:
              void draw()
             {
                     cout<<"circle is drawn"<<endl;
                     }
                     };      
                     
main()
{
      shape *ptr,s;   //same point obj calling base class and der class ....it is called polymorp object
      circle c;
      ptr=&s;
      ptr->draw();
       ptr=&c;
      ptr->draw();
      getch();
      }
