//Authors: Paniz Najjarrezaparast and NiKita Cutinho
//Date: September 25, 2019

//main.cpp, put your driver code here, 
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include "student.hpp"

int main(){


  


  //general variables used for all students:
  int appId;
  int app_count;
  string line, firstName, lastName;
  float cgpa;
  int researchScore;


//DOMESTIC STUDENTS ---------------------------------------------------------------
  
 //Read the domestic-stu.txt file and exit if failed
  ifstream domesticFile("domestic-stu.txt");
  if(!domesticFile.is_open()) 
  {
    cout << "Unable to open file domestic-stu.txt" << endl;
    return -1;
  }
  
  /*Read the first line of domestic-stu.txt which specifies
  *the file format and then print it out to the screen*/
  getline(domesticFile, line);
  cout << "File format: " << line << endl;

  /*Keep reading the rest of the lines in domestic-stu.txt.
   *In the example code here, I will read each data separated
   *by a comma, and then print it out to the screen.
   *In your lab assignment 1, you should use these read data
   *to initialize your DomesticStudent object. Then you can
   *use get and set functions to manipulate your object, and
   *print the object content to the screen
   */
  int stu_count = 1;
  app_count=1;
	
  /*while there is still something to read on the text file
  *continue taking the information that is separated by commas
  *and assigning it to the appropriate string varibles
  *change numbered information from string to int and assign
  *appropriately*/
  while( getline(domesticFile, line) ) {
    istringstream ss(line);

    string  province, s_cgpa, s_researchScore;
    float cgpa;

    //get firstName separated by comma
    getline(ss, firstName, ',');

    //get lastName separated by comma
    getline(ss, lastName, ',');

    //get province separated by comma
    getline(ss, province, ',');

    //get cpga separated by comma, and convert string to float
    getline(ss, s_cgpa, ',');
    cgpa = atof(s_cgpa.c_str());
    
    //get researchScore separated by comma, and convert it to int
    getline(ss, s_researchScore, ',');
    researchScore = atoi(s_researchScore.c_str());
	  
	  
    //create application IDs
    appId=20200000+(app_count);
    int i=1;

    //objects person and DomStudent use constructors to initialize
    Student person(firstName, lastName, cgpa, researchScore,appId);
    DomesticStudent DomStudent(province);

    //print the student info to the screen
    cout << "Domestic student " << stu_count << " " << person.getFirst_name() << " " 
	 << person.getLast_name() << " from " << DomStudent.getProvince() << " province has CGPA of "
	 << person.getCGPA() << ", and research score of " << researchScore << " with application ID number "<<appId<<endl;

    stu_count++;
    app_count++;
  }

  //close your file
  domesticFile.close();
	
//INTERNATIONAL STUDENTS--------------------------------------------------------------------
	
  //Read the international-stu.txt file and exit if failed
  ifstream internationalFile("international-stu.txt");
  if(!internationalFile.is_open()) 
  {
    cout << "Unable to open file international-stu.txt" << endl;
    return -1;
  }	
	
  //Read the first line of international-stu.txt, which specifies
  //the file format and then print it out to the screen
  getline(internationalFile, line);
  cout << "File format: " << line << endl;

  /*Continuing reading the rest of the lines in international-stu.txt
  *as there is still information on it.
  *Each data is separated by a comma, and then printed out to the screen.
  *Use this read data to initialize the InternationalStudent object.
  *Use get and set functions to manipulate object,
  *change numbered information from string to int and assign appropriately
  *and print the object content to the screen*/
  int istu_count = 1;
  while(getline(internationalFile, line)) 
  {
    /*process each line, each field is separated by a comma.
    We use istringstream to handle it.*/
    istringstream ss(line);

    string Country, s_CGPA, s_ResearchScore, s_Reading, s_Listening, s_Speaking, s_Writing;
    int reading;
    int listening;
    int speaking;
    int writing;

    //get firstName separated by comma
    getline(ss, firstName, ',');

    //get lastName separated by comma
    getline(ss, lastName, ',');

    //get Country separated by comma
    getline(ss, Country, ',');

    //get CGPA separated by comma, and convert string to float
    getline(ss, s_CGPA, ',');
    cgpa = atof(s_CGPA.c_str());
    
    //get ResearchScore separated by comma, and convert it to int
    getline(ss, s_ResearchScore, ',');
    researchScore = atoi(s_ResearchScore.c_str());
	  
    //get Reading separated by comma, and convert it to int
    getline(ss, s_Reading, ',');
    reading = atoi(s_Reading.c_str());
	  
    //get Listening separated by comma, and convert it to int
    getline(ss, s_Listening, ',');
    listening = atoi(s_Listening.c_str());
	  
    //get Speaking separated by comma, and convert it to int
    getline(ss, s_Speaking, ',');
    speaking = atoi(s_Speaking.c_str());

    //get Writing separated by comma, and convert it to int
    getline(ss, s_Writing, ',');
    writing = atoi(s_Writing.c_str());

    appId=20200000+(app_count);

    ToeflScore IntStudScores( reading,  listening, speaking, writing);

    //objects person and InternationalStudent use constructors to initialize
    Student person(firstName, lastName, cgpa, researchScore, appId);
    InternationalStudent IntStud(Country,IntStudScores);
	  
    //print the student info to the screen
    cout << "International student " << stu_count << " " << person.getFirst_name() << " " 
	 << person.getLast_name() << " from " << IntStud.getCountry() << " has CGPA of "
	 << person.getCGPA() << ", research score of " << person.getRes_score() << ", reading score of " << IntStudScores.getReading()
	 << ", listening score of " << IntStudScores.getListening() << ", speaking score of " << IntStudScores.getSpeaking() << ", a writing score of "
	 << IntStudScores.getWriting() <<" and a total score of "<<IntStudScores.getTotal()<<" with application ID number "<<appId<< endl;
	 
    istu_count++;
    app_count++;
  }

  //close your file
  internationalFile.close();

  return 0;
} 


