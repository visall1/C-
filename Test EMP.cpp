#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Person
{
	protected:
		int ID;
		char name[20];
		char sex[10];
	public:
		void input()
		{
			cout<<"Input ID="; cin>>ID;
			cin.ignore();
			cout<<"Input Name="; cin.getline(name,20);
			cout<<"Input Sex="; cin>>sex;
		}
		void output()
		{
			cout<<ID<<"\t"<<name<<"\t"<<sex<<"\t";
		}
};
class Employee:public Person
{
	private:
		float salary;
	public:
		void input()
		{
			Person::input();
			cout<<"Input Salary="; cin>>salary;
		}
		void output()
		{
			Person::output();
			cout<<salary<<endl;
		}
		int GetID()
		{
			return ID;
		}
		char *GetName()
		{
			return name;
		}
		float GetSalary()
		{
			return salary;
		}
			
};
int main()
{
	Employee emp[20];
	int i,n,op;
	
	do
	{
		cout<<" ======= M U N E==============\n";
		cout<<"1| >>	INPUT	>>\n";
		cout<<"2| >>	OUTPUT	>>\n";
		cout<<"3| >>	SEARCH	>>\n";
		cout<<"4| >>	UPDATE	>>\n";
		cout<<"5| >>	DELETE	>>\n";
		cout<<"6| >>	INSERT	>>\n";
		cout<<"7| >>	SORT	>>\n";
		cout<<"8| >>	EXIT	>>\n";
		
		cout<<"Choose One Options[1-6]="; cin>>op;
		switch(op)
		{
			case 1:
				{
					cout<<"Input Number="; cin>>n;
					for(i=0;i<n;i++)
					{
						emp[i].input();
					}
				}break;
			case 2:
				{
					cout<<"ID\tName\tGander\tSalary\n";
					cout<<"====================================\n";
					for(i=0;i<n;i++)
					{
						emp[i].output();
					}
				}break;
			case 3:
				{
					int sID;
					cout<<"Input ID To Search="; cin>>sID;
					cout<<"ID\tName\tGander\tSalary\n";
					for(i=0;i<n;i++)
					{
						if(sID==emp[i].GetID())
						{
							emp[i].output();
						}
					}
				}break;
			case 4:
				{
					char Uname[20];
					cout<<"Input Name To Update="; cin>>Uname;
					for(i=0;i<n;i++)
					{
						if(strcmp(Uname,emp[i].GetName())==0)
						{
							emp[i].input();
						}
					}
				}break;
			case 5:
				{
					int j;
					int Delete;
					cout<<"Input ID to Delete="; cin>>Delete;
					for(i=0;i<n;i++){
						if(Delete==emp[i].GetID())
						{
							for(j=i;j<n;j++)
							{
								emp[j]=emp[j+1];
							}
							n--;
						}
					}
					
				}break;
			case 6:
				{
					int j;
					int insert;
					cout<<"Input ID to Insert="; cin>>insert;
					for(i=0;i<n;i++)
					{
						if(insert==emp[i].GetID())
						{
							for(j=n;j>=i;j--)
							{
								emp[j]=emp[j-1];
							}
							emp[i].input();
							n++;
							break;
						}
					}
				}break;
			case 7:
				{
					Employee temp;
					int j;
					for(i=0;i<n;i++)
					{
						for(j=i+1;j<n;j++)
						{
							if(emp[i].GetSalary() < emp[j].GetSalary())
							{
								temp=emp[i];
								emp[i]=emp[j];
								emp[j]=temp;
							}
						}
					}
				}break;
			case 8:
				{
					exit(1);
				}break;
			
		}cout<<"PRESS [ ENTER ] TO CONTINUE...!\n";
	}while(getch()==13);
}
