#include<iostream.h>
#include<conio.h>
class a
{
      public:
      void ge()
      {
           cout<<"a";
           }
           };
           main()
           {
                 a *s=new a[3];
                 int i;
                 for(i=0;i<3;i++)
                 {
                    s->ge();
                    s++;
                    }
                    getch();
                    }             
