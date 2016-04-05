#include "stdafx.h"
#include "input.h"
#include "processing.h"
#include "output.h"

output::output()
{
	while (true) {
		// get current system time
		GetSystemTime(&time);

		// initialize our input class
		input triangle;

		try {
			triangle.run();
		}
		catch (Exception &e) {
			std::cerr << "Library Exception!!! " << e.description() << std::endl;
		}

		maindata = triangle.data;

		processing RTA(triangle.data);

		printoutput(time, index(RTA));

		Sleep(1000);
	}
}



output::~output()
{

}

void output::printoutput(SYSTEMTIME localtime, double price)
{
	std::cout << time.wHour << ":"
		<< time.wMinute << ":"
		<< time.wSecond << ":"
		<< time.wMilliseconds << " the index value is "
		<< price
		<< std::endl;

}

double output::index(processing process)
{
	return process.calculateindex();
}
