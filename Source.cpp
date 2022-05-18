/** Program Objective : Create an array of structuresand accept inputand display output
structure name - person
datamember - name, age, salary.
*/

#include <iostream>
#include <string>
using namespace std;

struct person {
	string name;
	int age;
	double salary;
};

int main()
{
	person p[5];
			// p[0], p[1], p[2],....p[5]
	cout << "enter 5 persons details like name, age and salary" << endl;

	for (int i = 0; i < 5; i++) // user inputs
	{
		cout << "Enter the person details: " << (i+1) << endl;
		cin >> p[i].name;
		cin >> p[i].age;
		cin >> p[i].salary;
	}
	cout << "Details of users" << endl;

	for (int i = 0; i < 5; i++) //print out on console
	{
		cout << "details of a person" << (i + 1) << endl;
		cout << "name: " << p[i].name << endl;//structure.member
		cout << "age:  " << p[i].age << endl;
		cout << "salary: " << p[i].salary << endl;
	}
	return 0;
}