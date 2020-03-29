// No const in both
#include<iostream.h>
#include<conio.h>
using namespace std;
class b
{

};
 
class d: public b
{
public:
void msg()
{
     cout<<"no const exist in base and der";

};
 

 main()
{
      d objd;
      objd.msg();
           getch();
}
