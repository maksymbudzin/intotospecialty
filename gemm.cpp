#include "gemm.h"
#include <iostream>
using namespace std;




Student::Student(string Studentname, int Studentrating , int Studentgrowth, int Studentexamscore, int Studentweight) {
    name = Studentname;
    rating = Studentrating;
    growth =  Studentgrowth;
    examscore =  Studentexamscore;
     weight =  Studentweight;
}
string Student::getName() {
    return name;
}
int Student::getRating() {
    return rating;
}
int Student::getGrowth()  {
    return growth;
}
int Student::getExamscore() {
    return examscore;
}
int Student::getWeight()  {
    return  weight;
}
void Student::get_inf() {
    cout << "\nStudent name  is " << "\"" << getName() << "\"" << ",Student rating is " << getRating() << ", Student growth is "
         << getGrowth() << ", Student examscore is " << getExamscore() << ",size is " << getWeight() << "\n";
}
Student::~Student(){

}
