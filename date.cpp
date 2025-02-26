#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
	dateString = "";
	day =0;
	month = 0;
	year = 0;
}

void Date::init(std::string dateStr){
	dateString = dateStr;
	std::stringstream ss(dateStr);
	std::string monthStr;
	std::string dayStr;
	std::string yearStr;

	std::getline(ss, monthStr, '/');
	std::getline(ss, dayStr, '/');
	std::getline(ss, yearStr);

	ss.clear();
	ss.str("");

	ss << day << " " << month << " " << year;
	ss >> day >> month >> year;
} 

void Date::printDate(){
	std::string months [] = {"null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << months[month] << " ";
	std::cout << ", " << year << std::endl;
}
