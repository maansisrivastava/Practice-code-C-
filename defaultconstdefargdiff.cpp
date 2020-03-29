#include<iostream.h>
#include<conio.h>
using namespace std;
class t
{
      private :
              int hr,min,sec;
              public:
                     *t()
                     {
                           hr=0;
                           min=0;
                           sec=0;
                           }
                          t(int h=10,int m=0,int s=0)
                           {
                           hr=h;
                           min=m;
                           sec=s;
                           }
              
                           void showtime()
                           {
                                cout<<"\n Time is : "<< "Hours :"<<hr<<"Minutes :"<<min<<"Seconds :"<<sec;
                                }
                                };
                                main()
                                {
                                      t a;
                                      
                                      a.showtime();
                                      
                                      getch();
                                      }                           
                                  
