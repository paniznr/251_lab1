//header file student.hpp to declare your classes

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
        string getFirst_name();
        string getLast_name();
        float getCGPA();
        int getRes_score();
        int getApp_id();

        string setFirst_name();
        string setLast_name();
        float setCGPA();
        int setRes_score();
        int setApp_id();

private:
        //functions for error checking  

        string First_name;
        string Last_name;
        float CGPA;
        int Res_score;
        int App_id;
};


class InternationalStudent //public: Student
{
private:
        string Country;
        int ToeflScore;

public: 
        string getCountry();
        int getToeflScore();
        string setCountry();
        int setToeflScore();

};
                        
