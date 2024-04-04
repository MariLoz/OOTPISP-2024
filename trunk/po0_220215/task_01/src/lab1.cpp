#include <iostream>
#include "Student.h"
using namespace std;

STUDENT NoName(STUDENT& s) {
    char n[7] = "NoName";
    STUDENT temp(s);
    temp.SetName(n);
    return temp;
}

void View(STUDENT a) {
    a.Show();
}

int main()
{
    setlocale(LC_ALL, "rus");
    char name[] = "Sasha";
    char name2[] = "Masha";

    void (STUDENT:: * fptr) (const char*, int, bool);
    fptr = &STUDENT::Set;

    STUDENT first(name, 3, 0);
    STUDENT* pStudent;
    pStudent = &first;
    first.Show();


    cout << endl;
    STUDENT second;
    second.Show();

    cout << endl;
    STUDENT third = first;
    third.Show();

    cout << endl;
    STUDENT fourth = NoName(second);
    fourth.Show();

    cout << endl;
    pStudent->Show();
    (pStudent->*fptr)(name2, 2, 1);    //pStudent->Set(name2, 2, 1);
    pStudent->Show();

    cout << endl;
    View(first);

    cout << endl;
}
