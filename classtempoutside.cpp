#include<iostream.h>
#include<conio.h>
using namespace std;
  template <class T> 
  class data 
  { 
  public: 
         void  data(T c) ;
};
  template <class T> 
  void data<class T>::data(T c)
          { 
                 cout << "c = " << c <<endl;
                  
                  } 
                 
                  int main() 
                  { 
                      data <char> h('A'); 
                      data <int> i(100); 
                      data <float> j(68.2);
                       getch();
                       return 0; 
                       }
