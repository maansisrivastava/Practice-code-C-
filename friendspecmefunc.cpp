#include<iostream.h>
#include<conio.h>
using namespace std;
class boy;
 class girl
 {
       
 int inco;
 public:
         int girlfunc(boy b1);                                                           
          void setdata(int in)
          {
                   inco=in;
            }
          void show()
          {
                  cout<<inco<<endl;;
        }
 };     
 class boy
{
      
              int inc1;
              int inc2;
              public:
                     void setdata(int in1,int in2)
                     {
                          inc1=in1;
                          inc2=in2;
                          }
                          friend int girl::girlfunc(boy b1);
                          };

int girl::girlfunc(boy b1)
{
return b1.inc1+b1.inc2;
}
                                           
main()
  {
boy b1;
girl g1;
b1.setdata(500,1000);
g1.setdata(300);
cout<<g1.girlfunc(b1)<<endl;
g1.show();
getch();
}
