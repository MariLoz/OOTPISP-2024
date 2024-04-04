#include "Student.h"
#include <cstring>

STUDENT::STUDENT() {
	char n[6] = "Lesha";
	strcpy(name, n);
	kurs = 1;
	sex = 0;
	std::cout << "A parameterless constructor is called on an object " << this << std::endl;
}
STUDENT::STUDENT(char* n, int k, bool s) {
	strcpy(name, n);
	kurs = k;
	sex = s;
	std::cout << "A constructor with parameters is called on an object " << this << std::endl;
}
STUDENT::STUDENT(const STUDENT& p) {
	strcpy(name, p.name);
	kurs = p.kurs;
	sex = p.sex;
	std::cout << "The copy constructor is called on the object " << this << std::endl;
}
void STUDENT::Set(char* n, int k, bool s) {
	/*name = n;
	kurs = k;
	sex = s;*/
	SetName(n);
	SetKurs(k);
	SetSex(s);
}
void STUDENT::SetName(char* n) {
	strcpy(name, n);
	std::cout << "Changed name of thå object " << this << std::endl;
}
void STUDENT::SetKurs(int k) {
	kurs = k;
	std::cout << "Changed course of thå object " << this << std::endl;
}
void STUDENT::SetSex(bool s) {
	sex = s;
	std::cout << "Changed sex of thå object " << this << std::endl;
}
void STUDENT::Show() {
	std::cout << "name: " << name << ", course: " << kurs << ", sex: " << sex << std::endl;
}
char* STUDENT::GetName()
{
	return name;
}
int STUDENT::GetKurs()
{
	return kurs;
}
bool STUDENT::GetSex()
{
	return sex;
}
STUDENT::~STUDENT()
{
	std::cout << "\nDestructor called on object " << this << std::endl;
	std::cout << "Student " << name << " deleted" << std::endl;
}


