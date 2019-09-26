//Authors
//Paniz Najjarrezaparast
//Nikita Cutinho
//Lab1

//----------------------------------------student.cpp---------------------------------

//In this file we're implementing all of our classes from the header file

#include "student.hpp"
#include <iostream>
#include <string>

using namespace std;
//--------------------------STUDENT----------------

        Student::Student(string FN, string LN, float cgpa, int Res, int App):
        First_name(FN), Last_name(LN), CGPA(cgpa), Res_score(Res), App_id(App)
        {
	  //Using check functions for Student in constructor, so that all information is checked  immediately
	  cgpa_check(cgpa);
	  res_score_check(Res);
	  id_check(App);
        }
        //default constructor for Student
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
        //Error  checking functions:
        //Checking if CGPA is valid to SFU's marking system, according to assignment instructions
        //making each function part of their respective class, in this case Student
        void Student::cgpa_check(float cgpa)
        {
            if (cgpa<0 || cgpa>4.33)
            {
                cout<<"Invalid CGPA. ";
            }
        }
        //Checking if Research score is valid
        void Student::res_score_check(int Res)
        {
            if (Res<0 || Res>100)
            {
                cout<<"Invalid research score. ";
            }
        }

        //Checking if application ID is valid (should be between 20200000 and 20209999)
        void Student::id_check(int App)
        {
            if (App<20200000 || App>20209999)
            {
                cout<<"Invalid application ID. ";
            }
        }






        //InternationalStudent Class
        InternationalStudent::InternationalStudent(string Cnt,ToeflScore score):Country(Cnt)
        {}
        //InternationalStudent default constructor
        InternationalStudent::InternationalStudent(){};
        //InternationalStudent GET FUNCTIONS
        string InternationalStudent::getCountry()
        {
            return Country;
        }
        int InternationalStudent::getScore()
        {
	  int stud_total= Score.getReading()+Score.getWriting()+Score.getSpeaking()+Score.getListening();
	  return stud_total;
        }
        //InternationalStudent SET FUNCTIONS
        void InternationalStudent::setCountry(string Cnt)
        {
            Country=Cnt;
        }
       




        //DomesticStudent Class
        DomesticStudent::DomesticStudent(string PRV):
	  Province(PRV){}
        DomesticStudent::DomesticStudent(){};
        //DomesticStudent GET FUNCTIONS
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
        //Using 4 inputs of specific scores to later create total score
        ToeflScore::ToeflScore(int read, int listen, int speak, int write):
        reading(read), listening(listen), speaking(speak), writing(write)
        {
	  //checking functions
	  reading_check(read);
	  listening_check(listen);
	  speaking_check(speak);
	  writing_check(write);
          
        }
        //ToeflScore default constructor
        ToeflScore::ToeflScore(){};
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
        void ToeflScore::setTotal(int read, int listen, int speak, int write)
        {
            total=read+listen+speak+write;
        }

        //ToeflScore checking functions:
        void ToeflScore::reading_check(int read)
        {
                if (read<0 || read>30) 
                {
                        cout<<"Invalid reading Toefl score. ";
                }
        }
        void ToeflScore::listening_check(int listen)
        {
                if (listen<0 || listen>30) 
                {
                        cout<<"Invalid listening Toefl score. ";
                }
        }
        void ToeflScore::speaking_check(int speak)
        {
                if (speak<0 || speak>30) 
                {
                        cout<<"Invalid speaking Toefl score. ";
                }
        }
        void ToeflScore::writing_check(int write)
        {
                if (write<0 || write>30) 
                {
                        cout<<"Invalid writing Toefl score. ";
                }
        }
        void ToeflScore::total_check(int tot)
        {
            if (tot>120)
            {
                cout<<"Invalid total Toefl score. ";
            }
        }
