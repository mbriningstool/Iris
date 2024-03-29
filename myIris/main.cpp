///////////////////////////////////////////
//Group 6 Iris Recognition
//CEG4110 Dr. Bourbakis
//Intro to Software Engineering
//Spring Semester 2019
//Group Members
//Michael Briningstool
//Adam Cone
//Brianna Kreger
//David Reeves
//Joshua Shaw
//Original Source code was obtained from 
//Github user Ekberjan project Iris_Image_Matching
//OpenCV version 2.4.10 library is also used
///////////////////////////////////////////

// myIris.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Iris\pirManager.h"
#include <iostream>
#include <fstream>

int _tmain(int argc, _TCHAR* argv[])
{
	

	
	cv::Mat genImage = cv::imread(/*path + */"Images/1.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	cv::Mat testImage = cv::imread(/*(path + */ "Images/2.jpg", CV_LOAD_IMAGE_GRAYSCALE);

	try
	{
		Proline::pirManager pir;
		pir.loadConfiguration("configuration.ini");		
		pir.run(genImage, testImage, "1.jpg", "2.jpg");
		std::cout <<  pir.getScore() << std::endl;

	}
	catch (std::exception e)
	{
		std::cout << e.what() ;
	}
	

	return 0;
}

