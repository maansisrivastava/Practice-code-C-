#include <iostream.h>
#include <conio.h>
using namespace std;
 
class student
{
   public:
          
          int rollno;
          char *name;
          char *add;
          public:
          student()   //constructor
          {
          rollno=0;
          name="";
          add="";
          }
          void setdetails(int r,char *n,char *a)
          {
          rollno=r;
          name=n;
          add=a;
          }
          void printdetails()
          {
          cout<<"\n Roll no is " <<rollno;
          cout<<"\n Name is "<<name;
          cout<<"\n Address is"<<add; 
          }
          };
          main()
          {
                student s1;
                cout<<"Initial value provided by the constructor"<<endl;
                s1.printdetails();
                cout<<endl;
                cout<<"Values provided by the user"<<endl;
                s1.setdetails(123,"Rohit","Chennai");
                s1.printdetails();
                getch();
                }
                         
