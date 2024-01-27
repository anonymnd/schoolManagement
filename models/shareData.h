#include <iostream>
using namespace std;
class ShareData{
protected:
    int id;
    string name;
    public:
        // setters
    void setId(int id) {
        this->id = id; 
        }
    void setName(string name) {
        this->name = name; 
        } 
    int getId() {
        return id; 
        }
    string getName() { 
        return name; 
        }
};