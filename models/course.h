#include <iostream>
#include "shareData.h"
using namespace std;
class Course: ShareData{
    private:
    int creditHours;  
    public:
    //getters
    Course(){this->id=0;}
    Course(int id, int h,string name){ 
        this->id = id;
        creditHours = h;
        this->name = name;
        }
        //setters   
        int getCreditHours() {return creditHours;}
        void setCreditHours(int h){creditHours=h;}
        
};