

StudentInfo::StudentInfo(string name, int id, double cgpa) {
    this->name = name;
    this-> id = id;
    this->cgpa = cgpa;

}
StudentInfo::StudentInfo() {
    name = " ";
    id= 0;
    cgpa=0.00;
}
string StudentInfo::setName(string name) {
    this->name = name;
}
string StudentInfo::getName() {
    return name;
}
int StudentInfo::setId(int id) {
    this->id=id;
}
int StudentInfo::getId() {
    return id;
}
double StudentInfo::setCgpa(double cgpa) {
    this->cgpa= cgpa;
}
double StudentInfo::getCgpa() {
    return cgpa;
}
bool StudentInfo::operator<(StudentInfo& s) {
    if(cgpa<s.getCgpa()) {
        return true;
    }

}
bool StudentInfo::operator>(StudentInfo& s) {
    if(cgpa>s.getCgpa()) {
        return true;
    }

}
bool StudentInfo::operator<=(StudentInfo& s) {
    if(cgpa<=s.getCgpa()) {
        return true;
    }

}
bool StudentInfo::operator>=(StudentInfo& s) {
    if(cgpa>=s.getCgpa()) {
        return true;
    }

}
bool StudentInfo::operator==(StudentInfo& s) {
    if(cgpa==s.getCgpa()) {
        return true;
    }

}
bool StudentInfo::operator!=(StudentInfo& s) {
    if(cgpa!=s.getCgpa()) {
        return true;
    }

}
/**overloading the << operator */
ostream& operator<<(ostream& stream, const StudentInfo& s) {
    stream<<" Name: "<<s.name<<" Id: "<<s.id<<" Cgpa: "<<s.cgpa<<endl;
    return stream;
}