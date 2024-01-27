#include "studentRepos.h"
#include "teacherRepos.h"
#include "courseRepos.h"
class StudentReposImpl : public StudentRepos
{
private:
    vector<Student> students;
    static int index ;

public:
    int addStudent(Student *Student)
    {
        students.push_back(*Student);
        return index++;
    }
};
class TeacherReposImpl : public TeacherRepos
{
private:
    vector<Teacher> teachers;
    static int index ;

public:
    int addTeacher(Teacher *teacher)
    {
        teachers.push_back(*teacher);
        return index++;
    }
};
class CourseReposImpl : public CourseRepos
{
private:
    vector<Course> courses;
    static int index ;

public:
    int addCours(Course *course)
    {
        courses.push_back(*course);
        return index++;
    }
};