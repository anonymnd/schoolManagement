#include <iostream>
#include "shareData.h"
using namespace std;
class BaseEntity:public ShareData{
protected:
    int age;
    string Phonenumber;
public:
        // setters
    void setPhoneNumber(string phoneNumber) {
        this->Phonenumber = phoneNumber; 
        }
    void setAge(int age) { 
        this->age = age; 
        }
        //  getters
    int getAge() {
        return age; 
        }
    string getPhoneNumber() {
        return Phonenumber; 
        }  

};