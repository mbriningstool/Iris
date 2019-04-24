// myIris.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Iris\pirManager.h"
#include <iostream>
#include <fstream>

int _tmain(int argc, _TCHAR* argv[])
{
	std::ofstream inputFile;
	inputFile.open("Images/FileList.txt");
	inputFile.close();
	//std::string path = "/Images/";
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

