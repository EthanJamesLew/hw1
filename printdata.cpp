#include <iostream>
#include "printdata.h"
#include <string>
#include <limits>
using std::string;

template <typename TYPE> 
long double exHandler(TYPE a)
/* Generic exception handler for collecting input. Ensures that the user inputs a valid entry for type TYPE

DIRTY HACK: Quick way to resolve overload is to input type sample of output*/
{
	std::cin >> a;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Bad entry. Try again: ";
		std::cin >> a;
	}
	std::cout << "\n";
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return a;
}
string exHandler(string a)
/* Override for string*/
{
	std::cin.ignore();
	std::getline(std::cin, a);
	std::cout << "\n";
	return a;
}

Printdata::Printdata()
{
	std::cout << "Enter a long integer: ";
	varA = new long int(exHandler((long int) 0));


	std::cout << "Enter a short integer: ";
	varB = new short int(exHandler((short int) 0));

	std::cout << "Enter a string: ";
	varC = new string(exHandler((string) ""));

	std::cout << "Enter a long double: ";
	varD = new long double(exHandler((long double) 0.0));
}

long int& Printdata::getLI()
{
	return *varA;
}

short int& Printdata::getSI()
{
	return *varB;
}

string& Printdata::getStr()
{
	return *varC;
}

long double& Printdata::getLD()
{
	return *varD;
}


