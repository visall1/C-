#include<iostream>
#include<conio.h>
using namespace std;
class Person{
	protected:
		int id;
		string name;
		string sex;
		string DOB;
	public:
		Person()
		{
			id=0;
			name="N/A";
			sex="N/A";
			DOB="N/A";
		}
		Person(int i,string n,string s,string d)
		{
			id=i;
			name=n;
			sex=s;
			DOB=d;
		}
		void Input()
		{
			cout<<"Input Id="; cin>>id;
			cin.ignore();
			cout<<"Input Name="; getline(std::cin,name);
			cout<<"Input Sex="; cin>>sex;
			cout<<"Input DOB[dd/mm/yy]="; cin>>DOB;
		}
		void Output()
		{
			cout<<"ID="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Sex="<<sex<<endl;
			cout<<"DOB="<<DOB<<endl;
		}
};
class Employee:public Person{
	private:
		double salary;
	public:
		Employee()
		{
			Person:Person();
			salary=0;
		}
		Employee(int i,string n,string s,string d,double sa)
		{
			id=i;
			name=n;
			sex=s;
			DOB=d;
			salary=sa;
		}
		void Input()
		{
			Person::Input();
			cout<<"Salary="; cin>>salary;
		}
		void Output()
		{
			Person::Output();
			cout<<"Salary="<<salary<<"$"<<endl;
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
		Student(int i,string n,string s,string d,float sc)
		{
			id=i;
			name=n;
			sex=s;
			DOB=d;
			score=sc;
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
int main()
{
	int i,n,op;
	do{
		cout<<"1| >> Person Data\n";
		cout<<"2| >> Employee Data\n";
		cout<<"3| >> Student Data\n";
		
		cout<<"Choose One Option : "; cin>>op;
		switch(op)
		{
			case 1:
				{
					Person ps[10];
					cout<<"Input Number="; cin>>n;
					for(i=0;i<n;i++)
					{
						ps[i].Input();
					}
					cout<<"=======Display======\n";
					for(i=0;i<n;i++)
					{
						cout<<"-------------------\n";
						ps[i].Output();
					}
				}break;
			case 2:
				{
					Employee emp[10];
					cout<<"Input Number="; cin>>n;
					for(i=0;i<n;i++)
					{
						emp[i].Input();
					}
					cout<<"=======Display======\n";
					for(i=0;i<n;i++)
					{
						emp[i].Output();
					}
				}break;
			case 3:
				{
					Student stu[10];
					cout<<"Input Number="; cin>>n;
					for(i=0;i<n;i++)
					{
						stu[i].Input();
					}
					cout<<"=======Display======\n";
					for(i=0;i<n;i++)
					{
						stu[i].Output();
					}
				}break;
		}
		cout<<"PRESS ENTER TO CONTINUE...!\n";
	}while(getch()==13);
}
