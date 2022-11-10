#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	int stdID;
	string stdName;
	void getpersonalDetails()
	{
		cout<<"Enter Student ID :"<<endl;
		cin>>stdID;
		cout<<"Enter student name :"<<endl;
		cin>>stdName;
	}
	void putpersonalDetails()
	{
		cout<<"The student ID is :"<<stdID<<endl;
		cout<<"The student name is :"<<stdName<<endl;
	}
	
};

class teacher{
	public:
	int trID;
	string trName;
	void getpersonalDetails()
	{
		cout<<"Enter teacher ID :"<<endl;
		cin>>trID;
		cout<<"Enter teacher name :"<<endl;
		cin>>trName;
	}
	void putpersonalDetails()
	{
		cout<<"The teacher ID is :"<<trID<<endl;
		cout<<"The teacher name is :"<<trName<<endl;
	}
	
};

class gradeCard{
	public:
	int stdID,trID,intm1,intm2,asmark1,asmark2,tint,endsem,total;
	float gpa;
	void enterMarks()
	{
		cout<<"Enter student ID :"<<endl;
		cin>>stdID;
		cout<<"Enter teacher ID :"<<endl;
		cin>>trID;
		cout<<"Enter internal marks 1:"<<endl;
		cin>>intm1;
		cout<<"Enter internal marks 2:"<<endl;
		cin>>intm2;
		cout<<"Enter asmark1 :"<<endl;
		cin>>asmark1;
		cout<<"Enter asmark2 :"<<endl;
		cin>>asmark2;
		tint=intm1+intm2+asmark1+asmark2;
		cout<<"Enter endsem marks :"<<endl;
		cin>>endsem;
		total=tint+endsem;
		compute();
	}
	void compute()
	{
		if(total>90)
			gpa=10;
		if(80<total<90)
			gpa=9;
		if(70<total<80)
			gpa=8;
	}
	void viewGradecard()
	{
		cout<<"Student ID :"<<stdID<<endl;
		cout<<"Marks :"<<total<<endl;
		cout<<"GPA :"<<gpa<<endl;
	}
};

gradeCard gd1;

int main()
{
	student st1;
	teacher tr1;
	st1.getpersonalDetails();
	st1.putpersonalDetails();
	tr1.getpersonalDetails();
	tr1.putpersonalDetails();
	gd1.enterMarks();
	gd1.viewGradecard();
}
		
