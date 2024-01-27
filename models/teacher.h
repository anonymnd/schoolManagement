#include "baseEntity.h"
#include <vector>
using namespace std;
class Student;
class Teacher : public BaseEntity
{
private:
    double salary;
    vector<Student*> students; //correct this later teacher dont won students
    //add teacher to classes classes own students and scholl own both student and classes

public:
    // setters
    void setSalary(double slary) {
        this->salary = salary; 
        }
    vector<Student*> getStudents(){ return students;}
    void addStudent(Student* student){this->students.push_back(student);}
    //  getters
    double getSalary() {
        return salary; 
        }    
};