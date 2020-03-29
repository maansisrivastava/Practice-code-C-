#include<iostream>
#include<conio.h>
using namespace std;
class inte
{
      public:
              int m;
              public:
                     inte(inte &i);
             inte(int x)
             {
                   m=x;
               }
               
              void show()
               {
                 cout<<"\t m :"<<m;
             
                  }
                  };
                inte::inte(inte &i)
             {
                 m=i.m;
              }
                 main()
               {
                      inte i1(10);
                      inte i2(i1);
                      i2.show();
                      inte i3=i2;
                      i3.show();
                      getch();
                    return 0;
                      
                      }
