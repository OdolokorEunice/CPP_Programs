#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;


struct Student
{
	char Name[20];
	int Score1;
	int Score2;
	int Score3;
	int Score4;
	float AvgScore;

};



struct Shop
{
	char ShopName[35];
	char Address[50];

};

void ReadStudentInfo(Student[]);
void CalcAverage(Student[]);
void WriteAvgScore(Student[]);





#endif