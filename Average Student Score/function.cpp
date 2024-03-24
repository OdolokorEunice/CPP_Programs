#include "header.h"


void ReadStudentInfo(Student student[])
{
	ifstream readfile("StudentInfo.txt");
	for(int i =0; i<3; i++)
	{
		char firstname[20];
		char lastname[20];
		
		readfile>> firstname >> lastname >> student[i].Score1 >> student[i].Score2 >> student[i].Score3 >> student[i].Score4 ;
	
		strcpy(student[i].Name, firstname);
		strcat(student[i].Name, " ");
		strcat(student[i].Name, lastname);
	}
	
	
	readfile.close();
	
}

void CalcAverage(Student student[])
{
	for(int i=0; i<3; i++)
	{
		int totalscore;
		totalscore = (student[i].Score1 +  student[i].Score2 +  student[i].Score3 +  student[i].Score4 );
		student[i].AvgScore = totalscore/ float(4);
	
	}

}
void WriteAvgScore(Student student[])
{
	ofstream writefile("ReadInfo.txt");
	for(int i= 0; i<3; i++)
	{
		writefile<< student[i].Name <<" " << student[i].AvgScore <<" \n";
	
	}

	writefile.close();
}