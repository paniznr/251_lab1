//Authors:
//Nikita Cutinho
//Paniz Najjarrezaparast
//Lab1
//---------------------------main.cpp-------------------------------------
//In this file, we are using our header and implementation files to read inputs from 2 text files (domestic-stu.txt and international-stu.txt) to output proper information using what we have learned about classes.


#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include "student.hpp"

int main(){


  //general variables used for all students:
  //created appId to create unique application ID for each student
  int appId;
  //created app_count to count the total number of students, including domestic and international, to make sure each student gets a unique ID
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

  //stu_count counts the number of specifically domestic students.
  int stu_count = 1;
  app_count=1;
	
/*while there is still something to read on the text file
*continue taking thr formation that is separated by commas
*
	*/
  while( getline(domesticFile, line) ) {
    istringstream ss(line);
    
    //initializing variables which are specific to Domestic class
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
	  
	  
    //create unique application IDs
    //starting with 20200000 and adding whatever the number of students is to it
    appId=20200000+(app_count);
  
    //Creating constructors for Student and DomesticStudent, which initializes values from our main file into the classes
    Student person(firstName, lastName, cgpa, researchScore,appId);
    //province is specific to DomesticStudent
    DomesticStudent DomStudent(province);
    

    //print the student info to the screen, using get functions from the classes we have defined
    cout << "Domestic student " << stu_count << " " << person.getFirst_name() << " " 
     << person.getLast_name() << " from " << DomStudent.getProvince() << " province has cgpa of "
	 << person.getCGPA() << ", and research score of " << researchScore << " with application ID number "<<appId<<endl;

    stu_count++;
    app_count++;
  }

  //close your file
  domesticFile.close();
  /////////////////////////////////
	
	
  //InternationalStudent ---------------------------------------------------------------
  //Now, doing same thing for InternationalStudent
	
  ifstream internationalFile("international-stu.txt");
  if(!internationalFile.is_open()) 
	  {
	    cout << "Unable to open file international-stu.txt" << endl;
	    return -1;
	  }	
	

  getline(internationalFile, line);
  cout << "File format: " << line << endl;

  /*Continuing reading the rest of the lines in international-stu.txt.
   each data is separated by a comma, and then printed out to the screen.
   Use this read data to initialize the InternationalStudent object.
   *Then you can
   *use get and set functions to manipulate your object, and
   *print the object content to the screen
   */
  //istu_count counts how many InternationalStudents specifically there are
  int istu_count = 1;
  while(getline(internationalFile, line)) 
  {
    /*process each line, each field is separated by a comma.
    We use istringstream to handle it.
    */
    istringstream ss(line);

    //initializing variables specific to InternationalStudent
    string Country, s_CGPA, s_ResearchScore, s_Reading, s_Listening, s_Speaking, s_Writing;
    int reading;
    int listening;
    int speaking;
    int writing;

    //get FirstName separated by comma
    getline(ss, firstName, ',');

    //get LastName separated by comma
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

    //creating unique application ID for International students
    appId=20200000+(app_count);

    //Initializing class values for ToeflScore, Student and InternationalStudent through constructors
    ToeflScore IntStudScores( reading,  listening, speaking, writing);
    Student person(firstName, lastName, cgpa, researchScore, appId);
    InternationalStudent IntStud(Country,IntStudScores);
	  
    //print the student info to the screen
    cout << "International student " << stu_count << " " << person.getFirst_name() << " " 
    << person.getLast_name() << " from " << IntStud.getCountry() << "  has cgpa of "
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


