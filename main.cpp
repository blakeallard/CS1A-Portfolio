
#include "header.h"


int main()
{

	string classHeader;
	string asName;
	int    asNum;
	char   asType;

	asName   = "Rock, Paper, Scissors";
	asNum    =  14;
	asType   = 'L';



	classHeader = OutputClassHeader(asName, asNum, asType);

	cout << classHeader;


return 0;
}
