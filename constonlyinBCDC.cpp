// const in BC only
#include<iostream>
#include<conio.h>
using namespace std;
class b
{
public:
    b()
    {
        cout << "no argument const of the base class B is executed " << endl;
    }
};
 
class d: public b
{
public:
    d()
    {
        cout << "no argument const of the derived class D is executed" << endl;
    }
};
 

 main()
{
      d obj;
           getch();
      }
