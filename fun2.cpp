#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
};

class Student : public Person{
	private:
		int stud_num;
		int q1_score;
	public:
		string course;
};

int main(){
	/*  1. Create an array of class Students. Capacity is 100.
		2. Put values to 3 elements of the class Student's array:
			2.a. name 
			2.b. age 
			2.c. stud_num 
			2.d. q1_score
			2.e. course
		3. Get the average of the 3 student's q1_score.
	*/
}
