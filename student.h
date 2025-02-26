#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "address.h"
#include "date.h"

class Student{
	private:
	std::string studentString;
	std::string name;
	std::string lastName;
	Date* dob;
	Date* gradDate;
	Address* address;
	int creditHours;

	public:
	Student();
	~Student();
	void init(std::string studentString);
	void printStudent();
//	std::string getLastFirst();
	
};

#endif
