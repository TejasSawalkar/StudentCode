#include<iostream>
using namespace std;
class Student{
	private: int id;
			string name;
			double marks1;
			double marks2;
			double marks3;
			
	public: Student()
			
			Student(int id,string name,double marks1,double marks2,double marks3);
			
			
			double total(double marks1,double marks2,double marks3);
			double percentage(double marks1,double marks2,double marks3);
			
			void display(){
				cout<<"id="<<id<<endl;
				cout<<"Name"<<name<<endl;
				cout<<"total"<<total(marks1,marks2,marks3)<<endl;
				cout<<"percentage"<<percentage(marks1,marks2,marks3)<<endl;
			}
};
