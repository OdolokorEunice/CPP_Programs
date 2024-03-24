#include "header.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std ;

int main()
{

	char string[50];
	char reversedstring[50];
	
	cout<< "Enter string characters"<< endl;
	cin.getline(string,50);
	

	reverseit(string,reversedstring);
	printit(reversedstring);
	
	system("pause");
	return 0;
}