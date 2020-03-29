#include <iostream>
#include <conio.h>
using namespace std;
class student
{
      public:
             int rollno;
             char *name;
             char *add;
             void printdetails() const//a normal mem func cannot be invoked by a const obj
             {
                  cout<<rollno<<endl;
                  cout<<name<<endl;
                  cout<<add<<endl;
                  }
                  };
                  main()
                  {
                        student s1;
                        s1.rollno=1;
                        s1.name="Bob";
                        s1.add="chennai";//once ini it cannot be modified
                       const  student s2=s1;//const obj must be ini at the time of creation
                        s2.printdetails();//
                        //s2.rollno=2;
                        s2.printdetails();
                        getch();
                        }
                        
