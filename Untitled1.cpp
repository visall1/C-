#include<iostream>
#include<stdlib.h>
using namespace std;
class person{
	protected:
		int id;
		string name;
		string dob;
	public:
		person()
		{
			id=0;
			name="N/A";
			dob="N/A";
		}
		person(int a,string b,string c)
		{
			id=a;
			name=b;
			dob=c;
		}
		void Input()
		{
			cout<<"Input ID="; cin>>id;
			cin.ignore();
			cout<<"Input Name= "; getline(std::cin,name);
			cout<<"Input DOB= "; cin>>dob;
		}
		void Output()
		{
			cout<<"ID="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"DOB="<<dob<<endl;
		}
};
class Student:public person
{
	private:
		float score;
	public:
		Student()
		{
			person:person();
			score=0;
		}
		Student(int a,string b,string c,float s)
		{
			id=a;
			name=b;
			dob=c;
			score=s;
		}
		void Input()
		{
			person::Input();
			cout<<"Input Score="; cin>>score;
		}
		void Output()
		{
			person::Output();
			cout<<"Score = "<<score<<endl;
		}
};
int main()
{
	person ps;
	ps.Input();
	ps.Output();
	Student stu;
	stu.Input();
	stu.Output();
}
