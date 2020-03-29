#include<iostream>
#include<conio.h>
using namespace std;
template<class x1=int,int times=3,class x2=char, int t2=5>
class sample
{
      public:
             void print( x1 y,x2 z);
             };
template<class x1,int times,class x2, int t2>
void print<x1,times, x2, t2>::print(x1 y, x2 z)
{
     for(int i=0;i<times;i++)
     {
     cout<<"Y :"<<y<<endl;
     
     }
     
     for(int j=0;j<t2;j++)
     {
     cout<<"Z :"<<z<<endl;}
     
     }
     main()
     {
           //sample<int, char> s1;
           //s1.print(5,'f');
            sample<char,5,float,6 > s2;
           s2.print('c',5.78); 
             sample<> s3;
             s3.print(20,'u');
              getch();
              }     
