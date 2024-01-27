#include "student.h"
#include "teacher.h"
int main()
{
    Student s1;
    Teacher t1;
    t1.setName("saad");
    s1.addTeacher(&t1);
}