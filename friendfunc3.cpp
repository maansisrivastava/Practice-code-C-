#include<iostream.h>
#include<conio.h>
using namespace std;
class two;
class one
{
private:
        int x;
        public:
        one(int a)
        {
        x=a;
        }
        friend class two;
};

class two
{
private:
int y;
public:
       two(int b)
       {
       y=b;
       }
       int max(one);
};
int two::max(one o)
{
    if(o.x>y)
    return o.x;
    else 
    return y;
}
main()
{
      one o(100);
      two t(50);
      cout<<"Max : "<<t.max(o);
      getch();
}
