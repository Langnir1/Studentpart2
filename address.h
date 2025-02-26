#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address{
	private:
	std::string street;
	std::string city;
	std::string state;
	std::string zipcode;
	public:
	Address();
	void init (std::string street, std::string city, std::string state, std::string zipcode);
	void printAddress();
};

#endif // end ADDRESS_H
