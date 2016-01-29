// raleigh-triangle-index.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "input.h"
#include "processing.h"
#include "output.h"

int main(int argc, char **argv)
{
	// fancy header of our project :)
	std::cout << "Raleigh Triangle Index - Automated Index Calculation" << std::endl;
	
	// initialize our input class
	input example;

	try {
		example.run(argc, argv);
	}

	catch (Exception &e) {
		std::cerr << "Library Exception!!! " << e.description() << std::endl;
	}

	// wait for enter key to exit application
	std::cout << "Press ENTER to quit" << std::endl;
	
	// same as system("PAUSE")
	char dummy[2];
	
	std::cin.getline(dummy, 2);
	
	return 0;
}
