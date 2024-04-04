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
	STUDENT(char* n, int k, bool s);
	STUDENT(const STUDENT& p);
	void Set(char* n, int k, bool s);
	void SetName(char* n);
	void SetKurs(int k);
	void SetSex(bool s);
	void Show();
	char* GetName();
	int GetKurs();
	bool GetSex();
	~STUDENT();
};
