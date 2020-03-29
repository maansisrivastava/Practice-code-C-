#include<iostream>
#include<conio.h>
using namespace std;

	class CAdd
	{

	public:
		int one;

		CAdd(int two)
		{
			cout << "A constructor is called" << endl;
			one=two;
		}

		CAdd()
		{
			cout << "A default constructor is called " << endl;
		}

		~CAdd()
		{
			cout << "Destructing " << one << endl;
			getch();
		}

		int add()
		{
			return(one+one);
		}
	};

	int main()
	{
		CAdd myobj1(4);
		CAdd myobj2;

		cout << myobj1.one << endl;
		cout << "Enter a number : " ;

		cin >> myobj2.one;
		cout << myobj2.add() << endl;
getch();
		return(0);
	}
