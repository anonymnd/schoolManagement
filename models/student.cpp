#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;
    int age;
    string Phonenumber;
    double gpa;

public:
    // setters
    void setId(int id) {
        this->id = id; 
        }
    void setName(string name) {
        this->name = name; 
        }
    void setPhoneNumber(string phoneNumber) {
        this->Phonenumber = phoneNumber; 
        }
    void setAge(int age) { 
        this->age = age; 
        }
    void setGPA(double gpa) {
        this->gpa = gpa; 
        }
    //  getters
    int getAge() {
        return age; 
        }
    string getPhoneNumber() {
        return Phonenumber; 
        }
    double getGPA() {
        return gpa; 
        }    
    int getId() {
        return id; 
        }
    string getName() { 
        return name; 
        }
};
    int main(){
            cout<<"hello world";
            }
