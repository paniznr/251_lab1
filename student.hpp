//header file student.hpp to declare your classes

//put constructors in header file??
//should we define private errorchecking functions in .hpp

#include <iostream>
#include <string>
using namespace std;

class ToeflScore
{
        private:
                int reading;
                int listening;
                int speaking;
                int writing;
                int total;

                void reading_check(int read);
                void listening_check(int listen);
                void speaking_check(int speak);
                void writing_check(int write);
                void total_check(int tot);
        public:
                ToeflScore(int read, int listen, int speak, int write, int tot);
                ToeflScore();
                int getReading();
                int getListening();
                int getSpeaking();
                int getWriting();
                int getTotal();
                //just using shortened names
                void setReading(int read);
                void setListening(int listen);
                void setSpeaking(int speak);
                void setWriting(int write);
                void setTotal(int read, int listen, int speak, int write);
                

};      
//adding this variable to use in the InternationalStudent
ToeflScore inter_student;


class Student
{
public:

        Student(string FN, string LN, float cgpa, int Res, int App);
        //default constructor
        //so that if called with no arguments, compiler knows what to do.
        Student();

        string getFirst_name();
        string getLast_name();
        float getCGPA();
        int getRes_score();
        int getApp_id();

        //using shortened versions of names
        void setFirst_name(string FN);
        void setLast_name(string LN);
        void setCGPA(float CG);
        void setRes_score(int Res);
        void setApp_id(int App);

       

private:
        //functions for error checking 
        void cgpa_check(float cgpa);
        //or should i check CGPA
        void res_score_check(int Res); 

        void id_check(int App);

        string First_name;
        string Last_name;
        float CGPA;
        int Res_score;
        int App_id;
};


class InternationalStudent : public Student
{
private:
        string Country;
        ToeflScore inter_student;
        void intStu_score_check(ToeflScore inter_student);

public: 
        InternationalStudent(string Cnt, ToeflScore inter_student);
        InternationalStudent();
        string getCountry();
        int getToeflScore();
        void setCountry(string Cnt);
        void setToeflScore(int score);

};

class DomesticStudent: public Student
{
        private:
                string Province;
        public:
                DomesticStudent(string PRV);
                DomesticStudent();
                string getProvince();
                void setProvince(string PRV);

};

