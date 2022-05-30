#include<iostream>
using namespace std;
class Person{
	protected:
		int ID;
		char name[20];
		char sex[10];
	public:
		void Input()
		{
			cout<<"Input ID="; cin>>ID;
			cin.ignore();
			cout<<"Input Name="; cin.getline(name,20);
			cout<<"Input Sex="; cin>>sex;
		}
		void Output()
		{ 	
			cout<<"ID="<<ID<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Sex="<<sex<<endl;
		}
};
class DOB{
	protected:
		int dd,mm,yy;
	public:
		void Input()
		{
			cout<<"Input DD="; cin>>dd;
			cout<<"Input MM="; cin>>mm;
			cout<<"Input YY="; cin>>yy;
		}
		
		void Output()
		{
			cout<<"[DD/MM/YY]="<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class Employee:public Person,public DOB
{
	private:
		float salary;
	public:
		void Input()
		{
			Person::Input();
			DOB::Input();
			cout<<"Input Salary="; cin>>salary;
		}
		void Output()
		{
			Person::Output();
			DOB::Output();
			cout<<"Salary="<<salary<<endl;
		}
};
int main()
{
	Employee emp;
	emp.Input();
	emp.Output(); 
}
