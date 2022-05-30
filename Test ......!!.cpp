#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Person
{
	protected:
		int code;
		string name;
		string sex;
		string DOB;
	public:
		Person()
		{
			code=0;
			name="N/A";
			sex="N/A";
			DOB="N/A";
		}
		Person(int c,string n,string s,string d)
		{
			code=c;
			name=n;
			sex=s;
			DOB=d;
		}
		void Input()
		{
			cout<<"Input Code="; cin>>code;
			cin.ignore();
			cout<<"Input Name="; getline(std::name,cin);
			cout<<"Input Sex="; cin>>sex;
			cout<<"Input DOB="; cin>>DOB;
		}
		void Output()
		{
			cout<<"Code="<<code<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Sex="<<sex<<endl;
			cout<<"DOB="<<DOB<<endl;
		}
};
class Enployee:public Person{
	private:
		float salary;
	public:
		Employee()
		{
			Person:Person();
			salary=0;
		}
		Employee(int a, string b,string c, string d,float e)
		{
			code=a;
			name=b;
			sex=c;
			DOB=d;
			salary=e;
		}
		void Input()
		{
			Person::Input();
			cout<<"Input Salary="; cin>>salary;
		}
		void Output()
		{
			Person::Output();
			cout<<"Salary="<<salary<<endl;
		}
};
class Student:public Person{
	private:
		float score;
	public:
		Student()
		{
			Person:Person();
			score=0;
		}
		Student(int a,string b,string c,string d,float e)
		{
			code=a;
			name=b;
			sex=c;
			DOB=d;
			score=e;
		}
		void Input()
		{
			Person::Input();
			cout<<"Input score="; cin>>score;
		}
		void Output()
		{
			Person::Output();
			cout<<"Score="<<score<<endl;
		}
};
int main()
{
	Student stu;
	stu.Input();
	stu.Output();
}
