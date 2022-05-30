#include<iostream>
using namespace std;
class Test1
{
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
				cout<<"Input X="; cin>>x;
				cout<<"Input y"; cin>>y;
				cout<<"Input z"; cin>>z;
			}
			void output()
			{
				cout<<"X="<<x<<endl;
				cout<<"Y="<<y<<endl;
				cout<<"Z"<<z<<endl;
			}
};
int main()
{
	Test2 obj2;
	obj2.output();
	Test2 obj3(100,50,30);
	obj3.output();
}
