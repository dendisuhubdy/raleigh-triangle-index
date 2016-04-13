// Header file for the input class

#pragma once

using namespace BloombergLP;
using namespace blpapi;

//defining structure
typedef struct {
	double price;
	double perc_shares_out;
	double eq_shares_out;
} t_securitydata;

class input
{
private:
	// private needed variables
	std::string              d_host;
	int                      d_port;
	std::vector<std::string> d_securities;
	std::vector<std::string> d_fields;
	std::vector<std::string> indexlist;

	// private needed function
	bool parseCommandLine();
	void printErrorInfo(const char *leadingStr, const Element &errorInfo);
	//void printUsage();
	void registerCallback(int verbosityCount);
	void sendRefDataRequest(Session &session);
	void processResponseEvent(Event event);
	void eventLoop(Session &session);
public:
	input();
	~input();
	void run();
	size_t numSecurities;
	std::vector<t_securitydata> data;
};

