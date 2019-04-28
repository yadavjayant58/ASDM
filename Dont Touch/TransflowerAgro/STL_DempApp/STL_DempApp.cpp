
#include "pch.h"
#include <iostream>
#include<stack>
#include <queue>
#include <deque>
#include <map>

//#include <vector>
using namespace std;
int main()
{
	// Use breakpoint to debug this code
	
	// use of Stack  from STL

	stack<int> apartment;
	apartment.push(4);
	apartment.push(7);
	apartment.push(4);
	apartment.push(3);
	apartment.pop();
	//std::cout << "Hello World!\n"; 

	//User of deque

	int bogie[] = { 11,15,18,19,13 };
	deque<int> train(bogie, bogie + 5);
	/* creates s train with elements 11,15,18,19,13  */
	train.push_back(10);
	/* now train is : 11,15,18,19,13,10 */
	train.push_front(20);
	/* now train is : 20,1,5,8,9,3,10  */


	//use of Map from STL
	// Key Value pair collection given by STL is Map
	
	map<int, int> salaries{ {1,20000} , {2,15000} , {3,35000} };
	/* creates a map m with keys 1,2,3 and
		their corresponding values 20000,15000,35000 */

	cout << salaries.at(1);  // prints value associated with key 1 ,i.e 20000
	cout << salaries.at(2);  // prints value associated with key 2 ,i.e 15000
	cout << salaries[3];     // prints value associated with key 3 , i.e ashish
	salaries.at(1) = 4500;   // changes the value associated with key 1 to 4500
	salaries[2] = 65000;     // changes the value associated with key 2 to 65000
	salaries[4] = 67000;

	/* since there is no key with value 4 in the map,
		it insert a key-value pair in map with key=4 and value = 67000 */

	//salaries.at(5) = 54000;
	/* since there is no key with value 5 in the map ,
	 it throws an exception  */

    std::cout << "Hello World!\n"; 
}



