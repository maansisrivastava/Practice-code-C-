#include <iostream.h>
#include <conio.h>
using namespace std;
class some
{
      public:
             int d1;
             int d2;
             some()
             {
             cout<<"const is invoked"<<endl;
             d1=1,d2='A';
             }
             ~some()
             {
             cout<<"Dest is invoked"<<endl;
             getch();
             }
             void show()
             {
             cout<<"d1 ="<<d1<<endl;;
             cout<<"d2= "<<d2<<endl;
             }
             };
             main()
             {
                   some *ptr;
                   some object1;
                   ptr=&object1;
                   cout<<"accessing through obe"<<endl;
                   object1.show();
                   cout<<"accessing through pointer object"<<endl;
                   ptr->show();
                   getch();
                   }
                   
