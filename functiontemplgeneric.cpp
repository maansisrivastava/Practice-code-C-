#include<conio.h>
#include<iostream.h>
using namespace std; 

template<class X>
void bubble(X a[])
{
    int i, j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                X element;
                element = a[i];
                a[i] = a[j];
                a[j] = element;
            }
        }
    }
}
  main()
{
    int a[5]={2,1,3,5,4};
    char b[5]={'s','b','d','e','a'};
    bubble(a);
    cout<<"\nSorted Order Integers: ";
    for(int i=0;i<5;i++)
        cout<<a[i]<<"\t";
    bubble(b);
    cout<<"\nSorted Order Characters: ";
    for(int j=0;j<5;j++)
        cout<<b[j]<<"\t";
    getch();
}
