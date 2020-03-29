#include<iostream.h>
#include<conio.h>
using namespace std;
class b
{
public:
    
    b(int a)
    {
           cout << "one argument const of the base class b is executed " << endl;
           }
        
          
};
 
class d: public b
{
public:
       d(int a)
    
    {
        cout << "one argument const of the derived class d is executed" << endl;
    }
};
 

 main()
{
      d obj(3);
           getch();
      }
