#include "baseEntity.h"
#include <vector>
using namespace std;
class Teacher;
class Course; //forward declaration 
class Student :public BaseEntity
{
private:
    double gpa;
    vector<Teacher*> teachers; //relationship
    vector<Course*> courses;   //owned by student
public:
    // setters
    void setGPA(double gpa) {
        this->gpa = gpa; 
        }
    //getters
    double getGPA() {
        return gpa; 
        }  
    void addTeacher(Teacher* teacher){teachers.push_back(teacher);}
    void addCourse(Course* course){courses.push_back(course);}
    vector<Teacher*> getTeachers(){return teachers;}
    vector<Course*> getCourses(){return courses;}

};

int main(){}
