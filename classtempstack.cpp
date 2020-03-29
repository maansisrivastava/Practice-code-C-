#include<iostream.h>
#include<conio.h>
using namespace std;
template<class T>
class stac
{
      int stackpt;
      T stackar[5];
      public:
             stac()
             {
             stackpt=0;
             }
             void push(T element);
             T pop();
             };
             template<class T>
             void stac<T>::push(T element)
             {
             if(stackpt==4)
             {
                           cout<<"stack overflow cant insert";
                           }
             else
             {
                 stackar[stackpt]=element;
                 stackpt++;
                 }
                 }
                 
                    template< class T>
              T stac<T>::pop(T element)
             {
             if(stackpt==0)
             {
                           cout<<"stack underflow cant pop";
                           }
             else
             {
                 stackpt--;
                 }
                 return stackar[stackpt];
                 }
                 main()
                 {
                       stac <int> mystack;
                       mystack.push(1);
                       mystack.push(2);
                       cout<<mystack.pop()<<endl;
                       cout<<mystack.pop()<<endl;
                       stac <char> m1stack;
                       mystack.push('a');
                       mystack.push('b');
                       cout<<m1stack.pop()<<endl;
                       cout<<m1stack.pop()<<endl;
                       getch();
                       }
