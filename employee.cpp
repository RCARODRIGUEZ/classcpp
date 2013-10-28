//Class Practice
//Employee.cpp
Employee::Employee(string, string, string, int)
{
	//This is the constructor
	name = em_name;
	IDNumber = ID;
	department = dpt;
	position = pos;
}

Employee::~Employee()
{
	//This is the destructor
}

//Functions
string Employee::setName()
{
	cout << "Enter your name: ";
	cin >> em_name;

	getName(em_name);

}

void Employee::getName(string nm)
{
	
}

