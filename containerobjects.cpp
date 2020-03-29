#include <iostream>
#include <conio.h>
using namespace std;
class one
{
      int a;
      public:
             one()
             {}
             one(int x)
             {
                     a=x;
           cout<<a;
                     }
                     };
class two
{
      int b;
      one a;
      public:
             two(one t,int y)
             {
                     a=t;
                     b=y;
         //            cout<<a<<b<<endl;
                     }
                     };
                     main()
                     {
                           two(one(10),20);
                         getch();
                           }
                           
