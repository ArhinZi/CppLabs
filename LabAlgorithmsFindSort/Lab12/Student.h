#pragma once
#include <string>
using namespace std;

class Student
{
private:
	string itsName;
	char itsMark;
public:
	Student(string name, char mark) :itsMark(mark), itsName(name) {}
	Student() :itsMark(0), itsName("Noname") {}
	bool operator<(Student s);
	bool operator>(Student s);
	bool operator<=(Student s);
	bool operator>=(Student s);
	string get_name();
	char get_mark();
};

