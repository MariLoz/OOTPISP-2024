#pragma once
#include <cstring>
#include <iostream>
//1.���������� ���������������� ����� � ������������ � ��������� ������� 
const int LNAME = 100;
class STUDENT {
	char name[LNAME];//���
	int kurs;//����
	bool sex;//���
public:
	STUDENT();
	STUDENT(const char* n, int k, bool s);
	STUDENT(const STUDENT& p);
	void Set(const char* n, int k, bool s);
	void SetName(const char* n);
	void SetKurs(int k);
	void SetSex(bool s);
	void Show() const;
	char* GetName();
	int GetKurs() const;
	bool GetSex() const;
	~STUDENT();
};
