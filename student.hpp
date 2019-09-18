//header file student.hpp to declare your classes

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
        Student(string f, string l, float C, int R, int A)
       
        string getFirst_name();
        string getLast_name();
        float getCGPA();
        int getRes_score();
        int getApp_id();

        void setFirst_name(string f);
        void setLast_name(string l);
        void setCGPA(float C);
        void setRes_score(int R);
        void setApp_id(int A);

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
        InternationalStudent(string C, int T);
        string getCountry();
        int getToeflScore();
        void setCountry(string C);
        void setToeflScore(int T);

};
                        
