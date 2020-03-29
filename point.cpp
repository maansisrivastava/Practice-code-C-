#include <iostream.h>
#include <conio.h>
using namespace std;

class student
{
      public:
             int rollno;
             void display()
             {
                  cout<<rollno<<endl;
                  }
                  };
                  main()
                  {
                        student *s1= new student;
                        (*s1).rollno=100;
                        (*s1).display();
                          s1->rollno=200;
                        s1->display();
                        int student ::*rollpoint=&student::rollno;
                        student newstu;
                        newstu.rollno=300;
                         student *newstupoint=&newstu;
                         cout<<newstupoint->rollno;
                         newstupoint->*rollpoint=400;
                         cout<<newstupoint->*rollpoint;
                         cout<<newstu.*rollpoint;
                         getch();
                         }
                        
