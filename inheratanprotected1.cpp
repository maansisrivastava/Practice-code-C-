//public Mem are the BC are treated as protec mem of the der class
///private mem of the base class not inherited
//protected mem of the base class are proc mem in the der class

#include<iostream.h>
#include<conio.h>

using namespace std;

class B
{
      protected:
              int a;
      public:
             int b;
             void setb(int val)
             {
                  a=val;
                  cout<<a<<endl;
                  }
                  };
class D: protected B
{
      private:
              int x;
      public:
             int y;
             void setd(int val)
             {
                  x=val;
                  
                  cout<<x<<endl;
                  
                  setb(20);//calling bc mem func
                  }
                  };
                  
                  main()
                  {
                        D obj;
                       obj.a=10;   // not ok
                        obj.x=10;   // not ok
                       obj.b=10;    //not ok
                        obj.y=10;
                       obj.setb(10);  //not ok
                        obj.setd(10);
                        getch();
                        }
