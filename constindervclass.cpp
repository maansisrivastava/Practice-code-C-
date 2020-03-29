// program to show how constructors are invoked in derived class
#include<iostream.h>
#include<conio.h>
using namespace std;
class alpha
{
    private: 
        int x; 
    public: 
        alpha(int i)
        {
            x = i;
            cout << "\n alpha initialized \n";
        }
        void show_x()
        {
            cout << "\n x = "<<x;
        }
};
class beta
{
    private: 
        float y; 
    public: 
        beta(float j)
        {
            y = j;
            cout << "\n beta initialized \n";
        }
        void show_y()
        {
            cout << "\n y = "<<y;
        }
};
class gamma : public beta, public alpha
{
    private: 
        int n,m; 
   public: 
        gamma(int a, float b, int c, int d): alpha(a), beta(b)
        {
            m = c;
            n = d;
            cout << "\n gamma initialized \n";
        }
        void show_mn()
        {
            cout << "\n m = "<<m;
            cout << "\n n = "<<n;
        }
};

 main()
{
    gamma g(5, 7.65, 30, 100);
    cout << "\n";
    g.show_x();
    g.show_y();
    g.show_mn();
    getch();
}
