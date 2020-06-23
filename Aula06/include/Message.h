#ifndef W5N_MESSAGE_H
#define W5N_MESSAGE_H

#include "Date.h"
#include "Time.h"

#include <string>

struct Message
{
    std::string content;
    Date date;
    Time time;

    Message(const string& message, const string& _date, const string& _time);
    	
};
#endif