#include<iostream.h>
#include<conio.h>
using namespace std;
template<class x1,class x2>
class sample
{
      public:
             void print(x1,x2);
             };
template<class x1,class x2>
void sample<x1,x2>::print(x1 r,x2 y)
{
     cout<<"x :"<<r<<endl;
     cout<<"y :"<<y<<endl;
     }
     main()
     {
           sample<int,char> s1;
           s1.print(12,'b');
            sample<char,char*> s2;
           s2.print('c',"box");  
              getch();
              }            
