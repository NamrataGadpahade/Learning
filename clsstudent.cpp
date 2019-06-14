#include<iostream>
using namespace std;

class student
{
	private:
	int rollNo;
	char name[10];
	float per;
	
	public:
		void accept(); 
		void display();
};
void student::accept()
{
	cout<<"\nEnter Roll no , name, percentage:";
	cin>>rollNo>>name>>per;
}
void student::display()
{
	cout<<"\nRoll no"<<rollNo<<"\tName="<<name<<"\tPer="<<per;
}
int main()
{
	student s,s1,s2;
	
	s.accept();
	s.display();
	
	s1.accept();
	s1.display();
	
	s2.accept();
	s2.display();
	
	s.accept();
	s.display();
	
	s1.display();
	s2.display();	
	return 0;
}
