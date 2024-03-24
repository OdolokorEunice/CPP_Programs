#include "header.h"



int main()
{
	Student Astudent[3];

	ReadStudentInfo(Astudent);
	CalcAverage(Astudent);
    WriteAvgScore(Astudent);


	system("pause");
	return 0;
}