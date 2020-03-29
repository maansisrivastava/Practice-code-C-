// Area of the circle
//By default if u dont include the data type it is int
// In C even if u declare const it can be changed but in C++ cannot by typing in const qualifier

#include<iostream.h>
#include<conio.h>
const float PI=3.1452;  // const datatype variablename = constvalue;
main()
{
    float radius;
    float area;
    cout<<"enter the radius of the circle : " ;
    cin >> radius;
    area= PI * radius * radius;
    cout<< "Area of Circle = " << area;
    getch();
}
