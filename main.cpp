#include "main.h"
using namespace std;

int main(int argc, char *argv[])
{
	//Initialize class that will initialize all variables
	Printdata appl = Printdata();

	//set precision for stream
	cout.precision(numeric_limits<long double>::digits10);

	//PrintOut
	{
		cout << "Long integer address: " << &(appl.getLI()) << endl << "Long integer value: " << appl.getLI() << endl << "Max value of long integer: " << numeric_limits<long int>::max() << endl << "Size of long integer: " << sizeof(appl.getLI()) << " bytes" << endl;
		cout << "Long short address: " << &(appl.getSI()) << endl << "Short integer value: " << appl.getSI() << endl << "Max value of short integer: " << numeric_limits<short int>::max() << endl << "Size of short integer: " << sizeof(appl.getSI()) << " bytes" << endl;
		cout << "Long string address: " << &(appl.getStr()) << endl << "String value: " << appl.getStr() << endl << "Size of string: " << sizeof(appl.getStr()) << " bytes" << endl;
		cout << "Long double address: " << &(appl.getLD()) << endl << "Long double value: " << appl.getLD() << endl << "Max value of long double: " << numeric_limits<long double>::max() << endl << "Size of long double: " << sizeof(appl.getLD()) << " bytes" << endl;
	}
	cout << "Ethan Lew 1-13-2016 HW1";

	return 0;
}
