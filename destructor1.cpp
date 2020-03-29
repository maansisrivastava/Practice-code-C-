#include<iostream.h>
#include<conio.h>
using namespace std;
int i=0;
class sample
{
      public :
      sample()
      {
      i++;
      cout<<"\n object : "<<i<<"created";
      }
      ~sample()
      {
      i--;
      cout<<"\n object : "<<i<<"created";
      getch();
      }
      };
      main()
      {
      sample s1,s2,s3,s4;
      getch();
      return 0;
      }
