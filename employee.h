//EMPLOYEE PROGRAM
//Employee.h
#include <iostream>
#include <string>
using namespace std;

class Employee
{
	private:
		string name;
		string department;
		string position;
		int IDNumber;

	;

	public:
		Employee();				//Constructor
		~Employee();			//Destructor

		//SETTERS
		string setName();
		void setDepartment();
		void setID();
		void setPosition();

		//GETTERS
		void getName(string);
		void getDepartment(string);
		void getID(string);
		void getPosition(string);

};
