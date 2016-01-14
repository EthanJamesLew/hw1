//G03729047 Ethan Lew HW 1
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
		cout << "Long short address: " << &(appl.getSI()) << endl << "Short integer value: " << appl.getSI() << endl << "Max negative value of short integer: " << numeric_limits<short int>::min() << endl << "Size of short integer: " << sizeof(appl.getSI()) << " bytes" << endl;
		cout << "Long string address: " << &(appl.getStr()) << endl << "String value: " << appl.getStr() << endl << "Size of string: " << appl.getStr().size() << " bytes" << endl;
		cout << "Long double address: " << &(appl.getLD()) << endl << "Long double value: " << appl.getLD() << endl << "Max value of long double: " << numeric_limits<long double>::max() << endl << "Size of long double: " << sizeof(appl.getLD()) << " bytes" << endl;
	}
	cout << "Ethan Lew HW1 \n";
	return 0;
}
