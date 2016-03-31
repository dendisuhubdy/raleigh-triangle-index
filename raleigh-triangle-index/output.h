#pragma once

#include "stdafx.h"
#include "processing.h"
#include "input.h"

class output
{
public:
	output();
	~output();
	void printoutput(SYSTEMTIME localtime, double price);
	double index(processing process);
	std::vector<t_securitydata> maindata;
private:
	SYSTEMTIME time;
};

