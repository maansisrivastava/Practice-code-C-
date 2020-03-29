//const in base and der in mulple inher
#include<iostream.h>
#include<conio.h>
using namespace std;
class b
{
public:
    
    b()
    {
           cout << "no argument const of the base class b1 is executed " << endl;
           }
        
          
};
 
class c
{
public:
    c()
    {
        cout << "no argument const of the derived class b2 is executed" << endl;
    }
};
class d: public b,public c
{
public:
    d():b(),c()
     {
        cout << "no argument const of the derived class d is executed" << endl;
    }
};
 main()
{
             d obj();
           getch();
      }

