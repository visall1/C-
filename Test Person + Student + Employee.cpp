#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Person{
	protected:
		int id;
		char name[20];
		char sex[10];
	public:
		Person()
		{
			id=0;
			strcpy(name,0);
			strcpy(sex,0);
		}
		Person(int a,char *b,char *c)
		{
			id=a;
			strcpy(name,b);
			strcpy(sex,c);
			
		}
		void Input()
		{
			cout<<"Input ID="; cin>>id;
			cin.ignore();
			cout<<"Input Name="; cin.getline(name,20);
			cout<<"Input Sex="; cin>>sex;
		}
		void Output()
		{
			cout<<"ID="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Sex="<<sex<<endl;
		}
};
class Student:public Person
{
	private:
		float score;
	public:
		Student()
		{
			Person:Person();
			score=0;
		}
		Student(int a,char *b,char *c,int d)
		{
			id=a;
			strcpy(name,b);
			strcpy(sex,c);
			score=d;
		}
		void Input()
		{
			Person::Input();
			cout<<"Input Score="; cin>>score;
		}
		void Output()
		{
			Person::Output();
			cout<<"Score="<<score<<endl;
		}
};
class Employee:public Person
{
	private:
		float salary;
	public:
		Employee()
		{
			Person:Person();
			salary=0;
		}
		Employee(int a,char *b,char *c,int d)
		{
			id=a;
			strcpy(name,b);
			strcpy(sex,c);
			salary=d;
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
int main()
{
	Person ps;
	ps.Input();
	ps.Output();
}
