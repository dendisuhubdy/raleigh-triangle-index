#pragma once

#include <blpapi_defs.h>
#include <blpapi_element.h>
#include <blpapi_event.h>
#include <blpapi_eventdispatcher.h>
#include <blpapi_exception.h>
#include <blpapi_logging.h>
#include <blpapi_message.h>
#include <blpapi_name.h>
#include <blpapi_request.h>
#include <blpapi_session.h>
#include <blpapi_subscriptionlist.h>

#include <vector>

#include "input.h"

class processing
{
public:
	processing(std::vector<t_securitydata>data);
	~processing();
	double calculateindex();
	double divisor();
private:
	std::vector<double> m_price;
	std::vector<double> m_perc_shares_out;
	std::vector<double> m_eq_shares_out;
	std::vector<double> divisor_history;
	int security_numbers;
	double index;

};

