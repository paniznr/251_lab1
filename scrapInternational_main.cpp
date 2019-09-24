
//INTERNATIONAL STUDENT
//Read the first line of international-stu.txt, which specifies
//the file format. And then print it out to the screen
  getline(internationalFile, line);
  cout << "File format: " << line << endl;

  /*Keep reading the rest of the lines in international-stu.txt.
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

  return 0;
} 
