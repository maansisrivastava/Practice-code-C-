//const in multiple inherited class with default invocation
#include<iostream>
#include<conio.h>
using namespace std;
class b1
{
public:
    
    b1()
    {
           cout << "no argument const of the base class b1 is executed " << endl;
           }
       ~  b1()
    {
           cout << "Des of the base class b1 is executed " << endl;
           }
          
};
 
class b2
{
public:
    b2()
    {
        cout << "no argument const of the derived class b2 is executed" << endl;
    }
    ~  b2()
    {
           cout << "Des of the base class b2 is executed " << endl;
           }
};
class d: public b2,public b1
{
public:
    d()
    {
        cout << "no argument const of the derived class d is executed" << endl;
    }
    ~ d()
    {
           cout << "Des of the base class d is executed " << endl;
           }
};
 main()
{
      d obj;
           getch();
      }
