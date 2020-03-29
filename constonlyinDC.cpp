// const in BC only
#include<iostream.h>
#include<conio.h>
using namespace std;
class b
{
//body of the base class without the const
};
 
class d: public b
{
public:
    d()
    {
        cout << "const exsist only in DC D" << endl;
    }
};
 

 main()
{
      d obj;
           getch();
      }
