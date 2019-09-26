//Nikita Cutinho
//Paniz Najjarrezaparast

//-------------------------student.hpp---------------------------------
//This file is used to declare all of our classes, which includes their functions and variables such as the error checkers and gets and sets.


#include <iostream>
#include <string>
using namespace std;

//-------------------------ToeflScore---------------------------------

class ToeflScore
{
          //ToeflScore private variables
          //These variables are private because we don't want to allow the user to change the values.

          private:
                int reading;
                int listening;
                int speaking;
                int writing;
                int total;
          //ToeflScore error checkers
          //The error checking functions are private as well, since we don't want the user to see how we detect the errors, only that there is one.

                void reading_check(int read);
                void listening_check(int listen);
                void speaking_check(int speak);
                void writing_check(int write);
                void total_check(int tot);

          //ToeflScore public functions

        public:
                //All get/set functions are public, since we want the user to access them and edit them.

                //The parameters of ToeflScore include the variables which are specific to the toefl score,such as the specific test scores, as mentioned in the instructions.
                ToeflScore(int read, int listen, int speak, int write);
                //ToeflScore default constructor, in case there is a situation where no arguments are given.
                ToeflScore();
                //ToeflScore get functions
                int getReading();
                int getListening();
                int getSpeaking();
                int getWriting();
                int getTotal();
                //The inputs 'read,' 'listen,' etc. are shortened names of the function ('Reading,' 'Listening,' etc)
                //ToeflScore set functions
                void setReading(int read);
                void setListening(int listen);
                void setSpeaking(int speak);
                void setWriting(int write);
                void setTotal(int read, int listen, int speak, int write);
                

};      

//-------------------------Student---------------------------------


class Student
{
        private:
                //Student error checking functions
                void cgpa_check(float cgpa);
                void res_score_check(int Res); 
                void id_check(int App);

                //Student private variables

                string First_name;
                string Last_name;
                float CGPA;
                int Res_score;
                int App_id;

        public:

                //Student main constructor
                Student(string FN, string LN, float cgpa, int Res, int App);
                //Student default constructor
                //so that if called with no arguments, compiler knows what to do.
                Student();

                //Student get functions
                string getFirst_name();
                string getLast_name();
                float getCGPA();
                int getRes_score();
                int getApp_id();

                //Student set functions
                void setFirst_name(string FN);
                void setLast_name(string LN);
                void setCGPA(float CG);
                void setRes_score(int Res);
                void setApp_id(int App);

};

//-------------------------InternationalStudent-------------

class InternationalStudent : public Student
{
         //InternationalStudent private variables
        private:
                string Country;
                ToeflScore Score;
        //InternationalStudent public functions
        public: 
                InternationalStudent(string Cnt,ToeflScore score);
                //InternationalStudent default constructor
                InternationalStudent();
                //InternationalStudent get functions
                string getCountry();
                int getScore();
                //InternationalStudent set functions
                void setCountry(string Cnt);

};

//-------------------------DomesticStudent----------------------

class DomesticStudent: public Student
{
        //DomesticStudent private variable
        private:
                string Province;
        //DomesticStudent public functions
        public:
        //DomesticStudent default function
                DomesticStudent(string PRV);
                DomesticStudent();
        //DomesticStudent get function
                string getProvince();
        //DomesticStudent set function
                void setProvince(string PRV);

};
