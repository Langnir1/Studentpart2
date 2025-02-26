#include <iostream>
#include "student.h"
#include <sstream>
#include "date.h"
#include "address.h"


Student::Student(){
	studentString = "";
	name = "";
	lastName = "";
	dob = new Date();
	gradDate = new Date();
	address = new Address();
	creditHours = 0;
}

Student::~Student(){
	delete dob;
	delete gradDate;
	delete address;
}

void Student::init(std::string studentStr){
	Student::studentString = studentStr;
	
	std::stringstream ss(studentStr);
	std::string name;
	std::string lastName;
	std::string street;
	std:: string city;
	std:: string state;
	std:: string zipcode;
	std:: string dobStr;
	std:: string gradStr;
	std:: string creditHoursStr;

	getline(ss, name, ',');
	getline(ss, lastName, ',');
	getline(ss, street, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zipcode, ',');
	getline(ss, dobStr, ',');
	getline(ss, gradStr, ',');
	getline(ss, creditHoursStr);

	name = name;
	lastName = lastName;
	dob->init(dobStr);
	gradDate->init(gradStr);
	address->init(street, city, state, zipcode);

	ss.clear();
	ss.str(creditHoursStr);
	ss  >> creditHours;
}

void Student::printStudent(){
	std::cout << name << " " << lastName << std::endl;
	address->printAddress();

	std::cout << "dob: ";
	dob->printDate();
	std::cout<< "gradDate: ";
	gradDate->printDate();

	std::cout << "creditHours: " << creditHours << std::endl;
	std::cout << " ";
	std::cout << std::endl;
} // end of printStudent
