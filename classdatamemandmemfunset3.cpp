#include <iostream.h>
#include <conio.h>
#include<string.h>
using namespace std;

class person
{
      public:
              char name[20];
              int age;
              double height;
      public:
              void getdata(void);
              void setdata(char *string,int a,double h);
              void showdata(void);
};

void person::getdata(void)
{
     cout<<"Enter the name"<<endl;
     cin.get(name,20);
     cout<<"Enter the age"<<endl;
     cin>>age;
     cout<<"Enter the height"<<endl;
     cin>>height;
}
void person ::setdata(char *string,int a,double h)
{
     strcpy(name,string);
     age=a;
     height=h;
}
void person::showdata(void)
{
     
     cout<<"The name is--------"<<name<<endl;
     cout<<"The age is---------"<<age<<"years"<<endl;
     cout<<"The height is------"<<height<<"cm"<<endl;
     
}

main()
{
     person p1,p2;
     p1.setdata("Bob",23,172.5);
     cout<<"Get data from the keyboard"<<endl;
     p2.getdata();
     cout<<endl;
     cout<<"Data about the first person"<<endl;
     p1.showdata();
     cout<<endl;
     cout<<"Data about the second person"<<endl;
     p2.showdata();
     getch();
     } 
