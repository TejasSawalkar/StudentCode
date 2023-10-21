#include<iostream>
#include"student.h"


class Student{
	Student(int id,string name,double marks1,double marks2,double marks3);
			
			
			double total(double marks1,double marks2,double marks3){
				return marks1+marks2+marks3;
			}
			double percentage(double marks1,double marks2,double marks3){
				return ((marks1+marks2+marks3)/300)*100);
			}
};
