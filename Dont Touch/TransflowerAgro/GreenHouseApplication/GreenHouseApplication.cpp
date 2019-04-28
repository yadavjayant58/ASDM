#include "pch.h"
#include <iostream>
#include <list>
#include <stack>
#include <map>
#include <queue>
 

//Pillars of Object Oriented 

//Abstratction----------------------class concept
//Inheritance & Polymorphism--------base classes, derived classes
//Encapsulation-------------------private
//Modularity ..............namespaces


using namespace std;
int main()
{
	 bool empStatus = true;   //one varialble with value inbuilt type

	 class Employee {		// User defined Type structure, classes, 
					        // interfaces, templates
	 public:
		 int salary;
		 bool status;
	 };


	 int mySalary = 150000;							//individual data
	 int salaries[4] = { 15000,20000,5000,43000 };  //collection data

	 //STL List
	 	 list<int> cdacStudentsSalaries = {10000,25000,35000,56000,15000 };
	 cdacStudentsSalaries.push_front(34000);  //inbuilt function

	 list<float> marks = { 34.5, 65.6,67.9 };  // float data Type collection

 	 cout << "First Employee Salary= " <<salaries[0] <<endl; 
	 getchar();
}

