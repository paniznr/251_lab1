//main.cpp, put your driver code here, 
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include "student.hpp"

/*I provide example code here to help you read the input
 *data from a file, so that you can focus on creating
 *and manipulating classes and objects
 */
int main(){
  //Read the domestic-stu.txt file and exit if failed
  string line;
  ifstream domesticFile("domestic-stu.txt");
  if(!domesticFile.is_open()) 
  {
    cout << "Unable to open file domestic-stu.txt" << endl;
    return -1;
  }

  //Read the first line of domestic-stu.txt, which specifies
  //the file format. And then print it out to the screen
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
  while( getline(domesticFile, line) ) {
    /*process each line, get each field separated by a comma.
     *We use istringstream to handle it.
     *Note in this example code here, we assume the file format
     *is perfect and do NOT handle error cases. We will leave the
     *error and exception handling of file format to Lab Assignment 4
     */
    istringstream ss(line);

    string firstName, lastName, province, s_cgpa, s_researchScore;
    float cgpa;
    int researchScore;

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

    //print the student info to the screen
    cout << "Domestic student " << stu_count << " " << firstName << " " 
	 << lastName << " from " << province << " province has cgpa of "
	 << cgpa << ", and research score of " << researchScore << endl;

    stu_count++;
  }

  //close your file
  domesticFile.close();
	/////////////////////////////////
	
	
	
	
	
	
	//INTERNATIONAL STUDENT
//Read the first line of international-stu.txt, which specifies
//the file format. And then print it out to the screen
  getline(internationalFile, line);
  cout << "File format: " << line << endl;
//FirstName,LastName,Country,CGPA,ResearchScore,Reading,Listening,Speaking,Writing

  /*Continuing reading the rest of the lines in international-stu.txt.
   each data is separated by a comma, and then printed out to the screen.
   Use this read data to initialize the InternationalStudent object.
   *Then you can
   *use get and set functions to manipulate your object, and
   *print the object content to the screen
   */
  int stu_Count = 1;
  while(getline(internationalFile, line)) 
  {
    /*process each line, each field is separated by a comma.
    We use istringstream to handle it.
    */
    istringstream ss(line);

    string FirstName, LastName, Country, s_CGPA, s_ResearchScore, s_Reading, s_Listening, s_Speaking, s_Writing;
    float CGPA;
    int ResearchScore;
    int reading;
    int listening;
    int speaking;
    int writing;

    //get FirstName separated by comma
    getline(ss, FirstName, ',');

    //get LastName separated by comma
    getline(ss, LastName, ',');

    //get Country separated by comma
    getline(ss, Country, ',');

    //get CGPA separated by comma, and convert string to float
    getline(ss, s_CGPA, ',');
    CGPA = atof(s_CGPA.c_str());
    
    //get ResearchScore separated by comma, and convert it to int
    getline(ss, s_ResearchScore, ',');
    ResearchScore = atoi(s_ResearchScore.c_str());
	  
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
	  
    //print the student info to the screen
    cout << "International student " << stu_count << " " << FirstName << " " 
	 << LastName << " from " << Country << " country has cgpa of "
	 << CGPA << ", research score of " << ResearchScore << ", reading score of " << reading
	 << ", listening score of " << listening << ", speaking score of " << speaking << ", and writing score of "
	 << writing << endl;
	 
    stu_count++;
  }

  //close your file
  internationalFile.close();

  return 0;
} 


