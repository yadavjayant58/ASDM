#include "pch.h"
#include <iostream>
#include <map>
using namespace std;

int show()
{
	// Key Value pair collection given by STL

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

	salaries.at(5) = 54000;
	/* since there is no key with value 5 in the map ,
	 it throws an exception  */

	map<int, int> backupSalaries(salaries);
	/* creates map backupSalaries which is a copy of map salaries */

	salaries.insert(pair<int, int>(4, 5));
	/* inserts a new entry of key = 4 and value = 5 in map m */

	/* make_pair() can also be used for creating a pair */
	salaries.insert(make_pair(5, 6));
	/* inserts a new entry of key = 5 and value = 6 */

	salaries.insert(make_pair(3, 6));
	// do not insert the pair as map m already contain key = 3 */ 

	map<string, int> marks;
	/*  creates a map with keys of type character and
	  values of type integer */

	marks["Ravi"] = 78;			// inserts key = "Ravi" with value = 78
	marks["Sachin"] = 89;       // inserts key = "Sachin" with value = 89
	marks["Meena"] = 72;        // inserts key = "Meena" with value = 72
	marks["Jeevan"] = 81;       // inserts key = "Jeevan" with value = 81

	map<char, int> score(marks.begin(), marks.end());
	/* creates a map score map which have entries copied
		from marks.begin() to marks.end() */

	getchar();
}