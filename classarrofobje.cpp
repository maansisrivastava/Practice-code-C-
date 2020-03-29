#include<iostream.h>
#include<conio.h>
using namespace std;
class stu
{
      private:
              int rollno;
              char *name;
              char *add;
              public:
                     void set(int roll, char *stuname, char *stuadd)
                     {
                          rollno=roll;
                          name= stuname;
                          add=stuadd;
                          }
                          void print()
                          {
                               cout<<"roll no   : "<<rollno<<endl;;
                               cout<<"stu name  :"<<name<<endl;;
                               cout<<"address   :"<<add<<endl;
                               }
                               };
                               main()
                               {
                                     stu s1[3];
                                     s1[0].set(1234,"selvam","chennai");
                                       s1[1].set(4,"namr","vellore");
                                         s1[2].set(13,"nawas","mum");
                                         for(int i=0;i<3;i++)
                                         {
                                                 s1[i].print();
                                                 }
                                                 getch();
                                                 }
                                     
