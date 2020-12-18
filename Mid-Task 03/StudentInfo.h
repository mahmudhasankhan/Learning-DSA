#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <string>
using namespace std;


class StudentInfo{
private:
    string name;
    int id;
    double cgpa;
public:
    StudentInfo(string, int, double);
    StudentInfo();
    string setName(string);
    string getName();
    int setId(int);
    int getId();
    double setCgpa(double );
    double getCgpa();
    bool operator<(StudentInfo&);
    bool operator>(StudentInfo&);
    bool operator<=(StudentInfo&);
    bool operator>=(StudentInfo&);
    bool operator==(StudentInfo&);
    bool operator!=(StudentInfo&);
    friend ostream& operator<<(ostream&, const StudentInfo &); /**used friend function to define the function outside class scope
                                                                       to avoid taking any implicit parameters**/
};
#include "StudentInfo.hpp"
#endif