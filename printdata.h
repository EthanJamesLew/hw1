#pragma once
#include <string>
using std::string;
#ifndef PRINTDATA_H
#define PRINTDATA_H

class Printdata
{
public:
	Printdata();
	long int& getLI();
	short int& getSI();
	long double& getLD();
	string& getStr();

private:
	long int * varA;
	short int * varB;
	string * varC;
	long double * varD;
};

#endif
