#include "Student.h"
#include <cstring>

STUDENT::STUDENT() {
	char n[6] = "Lesha";
	Set(n, 1, 0);
	std::cout << "A parameterless constructor is called on an object " << this << std::endl;
}
STUDENT::STUDENT(const char* n, int k, bool s) {
	Set(n, k, s);
	std::cout << "A constructor with parameters is called on an object " << this << std::endl;
}
STUDENT::STUDENT(const STUDENT& p) {
	strcpy(name, p.name);
	this->kurs = p.kurs;
	this->sex = p.sex;
	std::cout << "The copy constructor is called on the object " << this << std::endl;
}
void STUDENT::Set(const char* n, int k, bool s) {
	SetName(n);
	SetKurs(k);
	SetSex(s);
}
void STUDENT::SetName(const char* n) {
	strcpy(name, n);
	std::cout << "Changed name of thå object " << this << std::endl;
}
void STUDENT::SetKurs(int k) {
	this->kurs = k;
	std::cout << "Changed course of thå object " << this << std::endl;
}
void STUDENT::SetSex(bool s) {
	this->sex = s;
	std::cout << "Changed sex of thå object " << this << std::endl;
}
void STUDENT::Show() {
	std::cout << "name: " << name << ", course: " << kurs << ", sex: " << sex << std::endl;
}
char* STUDENT::GetName()
{
	return this->name;
}
int STUDENT::GetKurs()
{
	return this->kurs;
}
bool STUDENT::GetSex()
{
	return this->sex;
}
STUDENT::~STUDENT()
{
	std::cout << "\nDestructor called on object " << this << std::endl;
	std::cout << "Student " << this->name << " deleted" << std::endl;
}


