#ifndef DATE_H
#define DATE_H

#include <string>

class Date{
	private:
	std::string dateString;
	int day;
	int month;
	int year;
	public:
	Date();
	void init(std::string dateString);
	void printDate();
};

#endif //end DATE_H
