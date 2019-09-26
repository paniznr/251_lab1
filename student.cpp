//student.cpp to implement your classes


//FILE WITHOUT REDEFINING ALL CLASSES


#include "student.hpp"
#include <iostream>
#include <string>

using namespace std;

//constructors never have return type
        
        //Student class:
        //Creating constructor for student, where FN, LN, cgpa, Res, App are the variables which would be initialized
        //in main.cpp
        Student::Student(string FN, string LN, float cgpa, int Res, int App):
        First_name(FN), Last_name(LN), CGPA(cgpa), Res_score(Res), App_id(App)
        {
	  cgpa_check(cgpa);
	  res_score_check(Res);
	  id_check(App);
        }
Student::Student(){};
        
        //Student GET FUNCTIONS
        //These will return a private member value when called in main.cpp
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

        
        //STUDENT SET FUNCTION
        //These will apply the value given in main.cpp to the private variable in Student
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
        //Checking if CGPA is valid to SFU's marking system
        void Student::cgpa_check(float cgpa)
        {
            if (cgpa<0 || cgpa>4.33)
            {
                cout<<"Invalid CGPA.";
            }
        }
        //Checking if Research score is valid
        void Student::res_score_check(int Res)
        {
            if (Res<0 || Res>100)
            {
                cout<<"Invalid research score.";
            }
        }

        //Checking if application ID is valid (should be between 20200000 and 20209999)
        void Student::id_check(int App)
        {
            if (App<20200000 || App>20209999)
            {
                cout<<"Invalid application ID.";
            }
        }






        //InternationalStudent Class
        InternationalStudent::InternationalStudent(string Cnt,ToeflScore score)
        {}
        InternationalStudent::InternationalStudent(){};
        //InternationalStudent GET FUNCTIONS
        string InternationalStudent::getCountry()
        {
            return Country;
        }
        int InternationalStudent::getScore()
        {
	int stud_total= Score.getReading()+Score.getWriting()+Score.getSpeaking()+Score.getListening();
           // return stud_total;
        }
        //InternationalStudent SET FUNCTIONS
        void InternationalStudent::setCountry(string Cnt)
        {
            Country=Cnt;
        }
        //void InternationalStudent::setToeflScore(int score){
        //    Score=score;
        // }
        //InternationalStudent errorchecking
        //checking if student's score is valid
        /* void InternationalStudent::intStu_score_check(int score)
        {
            if (score<0 || score>120)
            {
                cout<<"Invalid International student Toefl score.";
            }
	    }*/




        //DomesticStudent 
        DomesticStudent::DomesticStudent(string PRV):
	  Province(PRV){}
        //GET FUNCTION
        DomesticStudent::DomesticStudent(){};
        string  DomesticStudent::getProvince()
        {
            return Province;
        }
        //SET FUNCTION
        void  DomesticStudent::setProvince(string PRV)
        {
            Province=PRV;
        }



        //ToeflScore Class
        //took out total from constructor line because can make it with 4 inputs
        ToeflScore::ToeflScore(int read, int listen, int speak, int write):
        reading(read), listening(listen), speaking(speak), writing(write)
        {
	  reading_check(read);
	  listening_check(listen);
	  speaking_check(speak);
	  writing_check(write);
          //total_check(tot);
        }
        ToeflScore::ToeflScore(){};
        //ToeflScore
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
	  total=reading+listening+speaking+writing;
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


        void ToeflScore::reading_check(int read)
        {
                if (read<0 || read>30) 
                {
                        cout<<"Invalid reading Toefl score.";
                }
        }
        void ToeflScore::listening_check(int listen)
        {
                if (listen<0 || listen>30) 
                {
                        cout<<"Invalid listening Toefl score.";
                }
        }
        void ToeflScore::speaking_check(int speak)
        {
                if (speak<0 || speak>30) 
                {
                        cout<<"Invalid speaking Toefl score.";
                }
        }
        void ToeflScore::writing_check(int write)
        {
                if (write<0 || write>30) 
                {
                        cout<<"Invalid writing Toefl score.";
                }
        }
        void ToeflScore::total_check(int tot)
        {
            if (tot>120)
            {
                cout<<"Invalid total Toefl score.";
            }
        }
