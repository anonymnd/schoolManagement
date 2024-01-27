#include "courseRepos.h"
#include "studentRepos.h"
#include "teacherRepos.h"

class StudentServiceImpl
{
private:
    StudentRepos studentRepos;

public:
    int addStudent(Student *Student)
    {
        studentRepos.add_student(Student);
    }
};
class TeacherServiceImpl
{
private:
    TeacherRepos teacherRepos;

public:
};
class CourseSErviceImpl
{
private:
    CourseRepos courseRepos;

public:
};
