//Program to enter your age and print if you should be in grade 10

#include <iostream.h>
#include <conio.h>
using namespace std;
 main()
{
int age;
cout << "Enter your present age : " << endl;
cin>>age;

if(age==16)
{
cout << "Your present age is " << age << " years." << endl;
cout << "You are of the right age for joining grade 10 !" << endl;
}

else
{
cout << "Your present age is " << age << " years." << endl;
cout << "You are not of the right age for joining grade 10 !" << endl;
}

getch();
}
