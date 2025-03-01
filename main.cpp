#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "address.h"
#include "date.h"
#include "student.h"

void loadStudents(std::vector <Student*>& students);
void printStudents(const std::vector<Student*>& students);
void showStudentNames(const std::vector<Student*>& students);
void findStudent(const std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
void menu(std::vector<Student*>& students);

void loadStudents(std::vector<Student*>& students){
	std::ifstream inFile("students.csv");
	if(!inFile){
		std::cerr << "Error, file failed" << std::endl;
		return;
	}

	std::string line;
	while (std::getline(inFile, line)){
		Student* newStudent = new Student();
		newStudent->init(line);
		students.push_back(newStudent);
	}
	inFile.close();
}

void printStudents(const std::vector<Student*>& students){
	for(const auto& student : students){
		student->printStudent();
		std::cout << "--------";
	}
}

void showStudentName(const std::vector<Student*>& students){
	for (const auto& student : students){
		std::cout << student->getLastName() << ", " << student->getFirstName() << std::endl;
	}
}

void delStudents(std::vector<Student*>& students){
	for(auto& student : students){
		delete student;
	}
	students.clear();
}

void menu(std::vector<Student*>& students){
	int choice = -1;
	bool keepGoing = true;

	while(keepGoing){
		std::cout << "0) Quit" << std::endl;
		std::cout << "1) Print all student names" << std::endl;
		std::cout << "2) print all student data" << std::endl;
		std::cout << "3) find a student (not implemented)" << std::endl;
		std::cout << "Please insert 0-3: ";
		std::cin >> choice;
	}

	if(choice == 0){
		std::cout << "Exiting";
	} else if (choice == 1){
		showStudentNames(students);
	} else if (choice == 2){
		printStudents(students);
	} else if (choice == 3) {
		findStudent(students);
	} else {
		std::cout << "Invalid";
	}
}

int main(){
	std::vector<Student*> students;

	loadStudents(students);

	menu(students);

	return 0;
}
