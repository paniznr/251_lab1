//student.cpp to implement your classes


//FILE WITHOUT REDEFINING ALL CLASSES


#include "student.hpp"
#include <iostream>
#include <string>

using namespace std;

//constructors never have return type


        Student::Student(string FN, string LN, float cgpa, int Res, int App):
        First_name(FN), Last_name(LN), CGPA(cgpa), Res_score(Res), App_id(App)
        {}
        
        //STUDENT GET FUNCTIONS
        string Student::getFirst_name()
        {
            return First_name;
        }
        string Student::getLast_name()
        {
            return Last_name;
        }
        float Student::getCGPA()
        {
            return CGPA;
        }
        int Student::getRes_score()
        {
            return Res_score;
        }
        int Student::getApp_id()
        {
            return App_id;
        }

        
//can we just use one set function for all?
        //STUDENT SET FUNCTIONS
        void Student::setFirst_name(string FN)
        {
            First_name=FN;
        }
        void Student::setLast_name(string LN)
        {
            Last_name=LN;
        }
        void Student::setCGPA(float cgpa)
        {
            CGPA=cgpa;
        }
        void Student::setRes_score(int Res)
        {
            Res_score=Res;
        }
        void Student::setApp_id(int App)
        {
            App_id=App;
        }
        //error checking
        void cgpa_check(float cgpa)
        {
            if (cgpa<0 || cgpa>4.33)
            {
                cout<<"Invalid CGPA.";
                //how do we go to the next line
            }
        }
        //or should i check CGPA
        void res_score_check(int Res)
        {
            if (Res<0 || Res>100)
            {
                cout<<"Invalid research score.";
                //how do we go to next line?
            }
        }

        void id_check(int App)
        {
            if (App<20200000 || App>20209999)
            {
                cout<<"Invalid application ID.";
            }
        }






        //constructor:
        InternationalStudent::InternationalStudent(string Cnt, int score):
        Country(Cnt), Score(score)
        {}

        string InternationalStudent::getCountry()
        {
            return Country;
        }
        int InternationalStudent::getToeflScore()
        {
            return Score;
        }
        void InternationalStudent::setCountry(string Cnt)
        {
            Country=Cnt;
        }
        void InternationalStudent::setToeflScore(int score){
            Score=score;
        }
        void intStu_score_check(int score)
        {
            if (score<0 || score>120)
            {
                cout<<"Invalid International student Toefl score.";
            }
        }




            //constructor:
        DomesticStudent::DomesticStudent(string PRV):
        Province(PRV){}

        string  DomesticStudent::getProvince()
        {
            return Province;
        }
        void  DomesticStudent::setProvince(string PRV)
        {
            Province=PRV;
        }



        //constructor:
        ToeflScore::ToeflScore(int read, int listen, int speak, int write, int tot):
        reading(read), listening(listen), speaking(speak), writing(write),total(tot)
        {}

        int ToeflScore::getReading()
        {
            return reading;
        }
        int ToeflScore::getListening()
        {
            return listening;
        }
        int ToeflScore::getSpeaking()
        {
            return speaking;
        }
        int ToeflScore::getWriting()
        {
            return writing;
        }
        int ToeflScore::getTotal()
        {
            return total;
        }
        //just using shortened names
        void ToeflScore::setReading(int read)
        {
            reading=read;
        }
        void ToeflScore::setListening(int listen)
        {
            listening=listen;
        }
        void ToeflScore::setSpeaking(int speak)
        {
            speaking=speak;
        }
        void ToeflScore::setWriting(int write)
        {
            writing=write;
        }
        // void ToeflScore::setTotal(int tot)
        // {
        //     total=tot;
        // }
        void ToeflScore::setTotal(int read, int listen, int speak, int write)
        {
            total=read+listen+speak+write;
        }


        void reading_check(int read)
        {
                if (read<0 || read>30) 
                {
                        cout<<"Invalid reading Toefl score.";
                }
        }
        void listening_check(int listen)
            {
                if (listen<0 || listen>30) 
                {
                        cout<<"Invalid listening Toefl score.";
                }
        }
        void speaking_check(int speak)
            {
                if (speak<0 || speak>30) 
                {
                        cout<<"Invalid speaking Toefl score.";
                }
        }
        void writing_check(int write)
            {
                if (write<0 || write>30) 
                {
                        cout<<"Invalid writing Toefl score.";
                }
        }
        void total_check(int tot)
        {
            if (tot>120)
            {
                cout<<"Invalid total Toefl score.";
            }
        }


/* //student.cpp to implement your classes
#include "student.hpp"
#include <iostream>
#include <string>

using namespace std;

//constructors never have return type

class Student
{
    public:
        //constructor:
        Student(string FN, string LN, float cgpa, int Res, int App);
        
        string getFirst_name();
        string getLast_name();
        float getCGPA();
        int getRes_score();
        int getApp_id();

        

        void Student::setFirst_name(string FN);
        void Student::setLast_name(string LN);
        void Student::setCGPA(float cgpa);
        void Student::setRes_score(int Res);
        void Student::setApp_id(int App);

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

        //constructor:
        InternationalStudent(string Cnt, int score);

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
                //constructor:
            DomesticStudent(string PRV);

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
            //constructor:
            ToeflScore(int read, int listen, int speak, int write, int tot);

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

};       */
