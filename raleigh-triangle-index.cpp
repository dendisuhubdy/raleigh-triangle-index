// raleigh-triangle-index.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "input.h"
#include "processing.h"
#include "output.h"

/* This is the main function called to access the program
// modify this part to modify the main functionality
// of the program
*/

int main(int argc, char **argv)
{
	// The Title header :)
	std::cout << "Raleigh Triangle Index - Automated Index Calculation" << std::endl;
	
	// run output
	output test;

	// wait for enter key to exit application
	std::cout << "Press ENTER to quit" << std::endl;
	
	// same as system("PAUSE")
	char dummy[2];
	
	std::cin.getline(dummy, 2);
	
	return 0;
}
