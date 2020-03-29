//LOCAL CLASSES

#include <iostream.h>
#include <conio.h>
using namespace std;

main()
{
      void test();//function declaaration
      test();//func call
      getch();
      }
      void test()
      {
           static int y=10;
           class A
           {
                 public:
                        int x;
                        void printdetails()  // local class func should not be defined outside the class
                        {
                             cout<<"x = "<<x<<"\t y = " << y<<endl;
                             }
                             };
                             A a;
                             a.x=1000;
                             a.printdetails();
                             }
