#ifndef LABA4_GEMM_H
#define LABA4_GEMM_H
#include <string>
#include <iostream>
using namespace std;
class Student {

private:
    string name;
    int rating;
    int growth;

protected:
    int examscore;
    int weight;

public:
    string education;
    int  certificats;

    Student();

    Student(string  Studentname, int Studentrating, int Studentgrowth, int Studentexamscore, int Studentweight);

    string getName();

    int getRating();

    int getGrowth();

    int getExamscore();

    int getWeight();

    void get_inf();

    ~Student();

};


#endif //LABA4_GEMM_H
