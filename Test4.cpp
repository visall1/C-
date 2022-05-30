#include <iostream>
using namespace std;
class Test1{
	protected:
		int x;
		int y;
	public:
		Test1()
		{
			x=0;
			y=0;
		}
		Test1(int a,int b)
		{
			x=a;
			y=b;
		}
		void input()
		{
			cout<<"Input X="; cin>>x;
			cout<<"Input Y="; cin>>y;
		}
		void output()
		{
			cout<<"X="<<x<<endl;
			cout<<"Y="<<y<<endl;
		}
};
class Test2:public Test1{
	private:
		int z;
	public:
		Test2()
		{
			Test1:Test1();
			z=0;
		}
		Test2(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void input()
		{
			Test1::input();
			cout<<"Input Z="; cin>>z;
		}
		void output()
		{
			Test1::output();
			cout<<"Z="<<z<<endl;
		}
};
class Test3:private Test1
{
	private:
		int z1;
	public:
		Test3()
		{
			Test:Test1();
			z1=0;
		}
		Test3(int a,int b,int c)
		{
			x=a;
			y=b;
			z1=c;
		}
		void input()
		{
			Test1::input();
			cout<<"Input Z1=";cin>>z1;
		}
		void output()
		{
			Test1::output();
			cout<<"Z1="<<z1<<endl;
		}
};
int main()
{
	Test3 obj3;
	obj3.output();
	obj3.input();
	obj3.output();
}
