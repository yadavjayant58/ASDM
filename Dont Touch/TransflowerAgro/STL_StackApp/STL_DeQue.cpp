#include "pch.h"
#include <iostream>
#include <deque>

using namespace std;
//int main()
//{
//	int boggies[] = { 1,5,8,9,3 };
//	deque<int> train(boggies, boggies + 5);
//	/* creates s deque with elements 1,5,8,9,3  */
//
//
//	train.push_back(10);
//	/* now dq is : 1,5,8,9,3,10 */
//
//	train.push_front(20);
//	/* now dq is : 20,1,5,8,9,3,10  */
//
//	deque<int>::iterator i;
//
//	i = train.begin() + 2;
//	/* i points to 3rd element in dq */
//
//	train.insert(i, 15);
//	/* now dq 20,1,15,5,8,9,3,10  */
//
//	int a[] = { 7,7,7,7 };
//
//	train.insert(train.begin(), a, a + 4);
//	/* now dq is 7,7,7,7,20,1,15,5,8,9,3,10  */
//
//	int building[] = { 1,5,8,9,3,5,6,4 };
//	deque<int> multiStorybuilding(building, building + 8);
//	/* creates s deque with elements 1,5,8,9,3,5,6,4  */
//
//	multiStorybuilding.pop_back();
//	/* removes an element from the back */
//	/* now the deque dq is : 1,5,8,9,3,5,6 */
//
//	multiStorybuilding.pop_front();
//	/* now dq is : 1,5,8,9,3,5,6  */
//	   	 
//	getchar();
//}