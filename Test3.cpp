#include<iostream>
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
		Test1(int a, int b)
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
		Test2(int a, int b,int c)
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
int main()
{
	Test2 obj2;
	obj2.input();
	obj2.output();
}
