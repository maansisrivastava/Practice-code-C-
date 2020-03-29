//when ever we make pure virtual fuction we need to overwrite
#include <iostream.h>
#include <conio.h>
using namespace std;
class enemy
{
      public:
             virtual void attack()
                
             {
                   cout<<"I am enemy class"<<endl;
                     }
                     };
             
      
class ninja:public enemy
{
      public:
             void attack()
             {
                   cout<<"I am ninja class"<<endl;
                     }
                     };
                     
                     
class monster:public enemy
{
      public:
             void attack()
             {
                   cout<<"I am monster class"<<endl;
                     }
                     };
                     
                     main()
                     {
                           ninja n;
                           monster m;
                           enemy *e1=&n;
                           enemy *e2=&m;
                           e1->attack();
                           e2->attack();
                           getch();
                           }
