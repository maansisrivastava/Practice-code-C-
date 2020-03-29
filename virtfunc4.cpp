#include <iostream.h>
#include <conio.h>
using namespace std;
class shape
{
      public:
             virtual void draw(int a=1)
             {
                     int ssize=100;
                     int size;
                     cout<<"Shape is drawn"<<endl;
                        if(a==1)
                        {
                              size=ssize;  
                        cout<<size<<endl;
                     }
                     else
                     cout<<a;
                     }};
class circle:public shape
{
      public:
              void draw(int b=1)
             {
                   int csize=200;
                   int size;
                     cout<<"circle is drawn"<<endl;
                     if(b==1)
                        {
                        size=csize;        
                        cout<<size<<endl;
                     }
                     cout<<b;
                     }
                     };      
                     
main()
{
      shape *ptr,s;   //same point obj calling base class and der class ....it is called polymorp object
      circle c;
      ptr=&s;
      ptr->draw();
       ptr=&c;
      ptr->draw();  //pointer obj of the base class call the der class draw when the adre of the der class is ass
      getch();
      }
