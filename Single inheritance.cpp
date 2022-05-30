#include<iostream>
using namespace std;
class Test1
{
	protected:
		int x;
		int y;
};
class Test2:public Test1{
	private:
		int z;
		public:
			void input()
			{
				cout<<"Input X="; cin>>x;
				cout<<"Input y="; cin>>y;
			}
			void Output()
			{
				cout<<"X="<<x<<endl;
				cout<<"Y="<<y<<endl;
				cout<<"Z="<<z<<endl;
				
			}
};
int main()
{
	Test2 obj2;
	obj2.input();
	obj2.Output();
}
