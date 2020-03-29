#include <iostream.h>
#include <conio.h>
using namespace std;

class data
{
    public:
    void date(int dd)
    {
        cout<<"\t"<<dd<<endl;
    }
    int day;
};

main()
{
   
    data f1,f2;
    f1.date(07);
    f2.date(12);
    f1.day=2;
    cout<<"\t"<<f1.day<<endl;
    f2.day=12;
    cout<<"\t"<<f2.day<<endl;
    
    getch();
}
