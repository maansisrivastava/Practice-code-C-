#include<iostream.h>
#include<conio.h>
class A 
{
public:
int a;
public:
void get()
{
cout<<"\n Enter a value:";
cin>>a;     
}
};
 
class B: virtual public A
{
public:
int b;
public:
void get1() 
{
cout<<"\n Enter b value";
cin>>b;  
}
};
 
class C: virtual public A     
{
public:
int c;
public:
void get2()  
  {
cout<<"\n Enter c value:";
cin>>c;  
  }
  };
 
class D:public B,public C
{
public:
void display()
    {
    get();
    get1();   
    get2();
cout<<"\n Multiplication value is "<<a*b*c;   
 }
 };
 
 main()  
   {
D a;        
a.display();    
getch();    
}
