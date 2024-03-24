#include "header.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std ;


void reverseit(char string[50],char reversedstring[50])
{
	
	int  len;
	len = strlen(string);
	for(int i = 0 ; i<len; i++)
	{
		 reversedstring[i] = string[len-1-i];
	}
    reversedstring[len] = '\0' ;
	
}

void printit(char reversedstring[50])
{
   
   cout<< reversedstring<< endl;

}