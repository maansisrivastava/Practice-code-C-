// Program to enter the sale value and print the agent's commission.

#include <iostream.h>
#include <conio.h>
using namespace std;

main()
{

long int svalue;
float commission;
cout << "Enter the total sale value : " << endl;
cin>>svalue;

if(svalue<=10000)
{
commission=svalue*5/100;
cout << "For a total sale value of $" << svalue << ", ";
cout << "the agent's commission is $" << commission;
}

else if(svalue<=25000)
{
commission=svalue*10/100;
cout << "For a total sale value of $" << svalue << ", ";
cout << "the agent's commission is $" << commission;
}

else if(svalue>25000)
{
commission=svalue*20/100;
cout << "For a total sale value of $" << svalue << ", ";
cout << "the agent's commission is $" << commission;
}

getch();
}
