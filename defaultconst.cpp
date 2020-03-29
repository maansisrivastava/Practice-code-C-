#include <iostream.h>
#include <conio.h>
using namespace std;
class Defal
{
public:
int x;
int y;
Defal()
{
       x=y=0;
}
};
int main()
{
Defal A;
cout << "Default constructs x,y value::"<<A.x <<" , "<< A.y << "\n";
getch();
return 0;
}
