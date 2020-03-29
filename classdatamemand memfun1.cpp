#include <iostream.h>
#include <conio.h>
using namespace std;

class student
{
      public:
             int rollno;
             char name[20];
             int age;
             float marks;
      public:
            int getdata();
             int displaydata();
             };

       
        int student::getdata()
 {
        cout<<"Enter the name ";
        cin>>name;
        cout<<"enter the roll no";
        cin>>rollno;
        cout<<"enter the age";
        cin>>age;
        cout<<"enter the marks";
        cin>>marks;
        return 0;
        }
                    
int student::displaydata()
 {
          cout<<" The name is ";
        cout<<name<<endl;
        cout<<" roll no is "<<endl;
        cout<<rollno<<endl;
        cout<<"the age is"<<endl;
        cout<<age<<endl;
        cout<<" marks is "<<endl;
        cout<<marks<<endl;
        return 0;
        
        }
        
	 int main()
	 {
           student s1;
           s1.getdata();
           s1.displaydata();
           getch();
           }
