#include <iostream.h>
#include <conio.h>
using namespace std;


void display(char = '*', int = 1);

int main() {
    cout<<"No argument passed:\n";
    display();
    
    cout<<"\n\nFirst argument passed:\n";
    display('#');
    
      cout<<"\n Second argument passed:\n";
    display('%');
    
    cout<<"\n\nBoth argument passed:\n";
    display('$', 5);
    
getch();
    return 0;
}

void display(char c, int n){
    for(int i = 1; i <=n; ++i) {
     cout<<c;
     cout<<n;
    }
    cout<<endl;
}
