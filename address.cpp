#include "address.h"
#include <iostream>

Address::Address(){
	street = "";
	city = "";
	state = "";
	zipcode = "";
} 

void Address::init(std::string street, std::string city, std::string state, std::string zipcode){
	Address::street = street;
	Address::city = city;
	Address::state = state;
	Address::zipcode = zipcode;
}

void Address::printAddress(){
	std::cout << street << std::endl;
	std::cout << city << " " << state << ",";
	std::cout << zipcode << std::endl;
}
