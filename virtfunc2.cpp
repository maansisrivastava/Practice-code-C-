#include <iostream>
#include <conio.h>
using namespace std;
class shape
{
      public:
             virtual void draw(int size=100)
             {
                     cout<<"Shape is drawn"<<endl;
                        cout<<size<<endl;
                     }
                     };
class circle:public shape
{
      public:
              void draw(int size=200)
             {
                     cout<<"circle is drawn"<<endl;
                     cout<<size<<endl;
                     }
                     };      
                     
main()
{
      shape *ptr,s;   //same point obj calling base class and der class ....it is called polymorp object
      circle c;
      ptr=&s;
      ptr->draw(10);
       ptr=&c;
      ptr->draw(20);
      getch();
      }
