//const with multilevel inher
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
 
class c:public b
{
public:
    c()
    {
        cout << "no argument const of the derived class b2 is executed" << endl;
    }
};
class d: public c
{
public:
    d()
     {
        cout << "no argument const of the derived class d is executed" << endl;
    }
};
 main()
{
             d obj();
           getch();
      }

