//header file student.hpp to declare your classes

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
        Student(string FN, string LN, float cgpa, int Res, int App);
       
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
        int ToeflScore;

public: 
        InternationalStudent(string C, int T);
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
                string getProvince();
                void setProvince(string PRV);

};

class ToeflScore
{
        private:
                int reading;
                int listening;
                int speaking;
                int writing;
                int total;
        public:
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
                void setTotal(int tot);

};      
