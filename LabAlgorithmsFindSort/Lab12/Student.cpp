#include "Student.h"

bool Student::operator<(Student s) {
	return (this->itsMark < s.itsMark);
}
bool Student::operator>(Student s) {
	return (this->itsMark > s.itsMark);
}
bool Student::operator<=(Student s) {
	return (this->itsMark <= s.itsMark);
}
bool Student::operator>=(Student s) {
	return (this->itsMark >= s.itsMark);
}

string Student::get_name() {
	return this->itsName;
}

char Student::get_mark() {
	return this->itsMark;
}