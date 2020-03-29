#include<conio.h>
#include<iostream.h>
using namespace std; 

template<class X>
void bubble(X a[], int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
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
    int a[6]={1,2,3,4,4,3};
    char b[4]={'s','b','d','e'};
    bubble(a,6);
    cout<<"\nSorted Order Integers: ";
    for(int i=0;i<6;i++)
        cout<<a[i]<<"\t";
    bubble(b,4);
    cout<<"\nSorted Order Characters: ";
    for(int j=0;j<4;j++)
        cout<<b[j]<<"\t";
    getch();
}
