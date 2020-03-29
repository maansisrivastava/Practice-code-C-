#include <iostream.h>
#include <conio.h>
using namespace std;

class outer
{
      private:
              class inner
              {
                    public:
                           void display()
                           {
                                cout<<"welcome";
                                }
                                };
                                public:
                                       void show()
                                       {
                                            inner in;
                                            in.display();
                                            }
                                            };
                                            main()
                                            {
                                                  outer out;
                                                  out.show();
                                                  getch();
                                                  }
