#include <iostream.h>
#include <conio.h>
using namespace std;
int num=20;
int main()
{
    int num=10;
    cout<<"local = "<<num<<endl;
    cout<<"global ="<<::num<<endl;
    cout<<"local + global ="<<::num+num<<endl;
    getch();
}
    
