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
  int stu_count = 1;
  while(getline(internationalFile, line)) 
  {
    /*process each line, each field is separated by a comma.
    We use istringstream to handle it.
    */
    istringstream ss(line);

    string FirstName, LastName, Country, CGPA, ResearchScore, Reading, Listening, Speaking, Writing;
    float CGPA;
    int ResearchScore;
    int Reading;
    int Listening;
    int Speaking;
    int Writing;

    //get FirstName separated by comma
    getline(ss, FirstName, ',');

    //get LastName separated by comma
    getline(ss, LastName, ',');

    //get Country separated by comma
    getline(ss, Country, ',');

    //get CGPA separated by comma, and convert string to float
    getline(ss, CGPA, ',');
    CGPA = atof(CGPA.c_str());
    
    //get ResearchScore separated by comma, and convert it to int
    getline(ss, ResearchScore, ',');
    ResearchScore = atoi(ResearchScore.c_str());
	  
    //get Reading separated by comma, and convert it to int
    getline(ss, Reading, ',');
    Reading = atoi(Reading.c_str());
	  
    //get Listening separated by comma, and convert it to int
    getline(ss, Listening, ',');
    Listening = atoi(Listening.c_str());
	  
    //get Speaking separated by comma, and convert it to int
    getline(ss, Speaking, ',');
    Speaking = atoi(Speaking.c_str());

    //get Writing separated by comma, and convert it to int
    getline(ss, Writing, ',');
    Writing = atoi(Writing.c_str());
	  
    //print the student info to the screen
    cout << "International student " << stu_count << " " << FirstName << " " 
	 << LastName << " from " << Country << " country has cgpa of "
	 << CGPA << ", research score of " << ResearchScore << ", reading score of " << Reading
	 << ", listening score of " << Listening << ", speaking score of " << Speaking << ", and writing score of "
	 << Writing << endl;
	 
    stu_count++;
  }

  //close your file
  internationalFile.close();

  return 0;
} 
