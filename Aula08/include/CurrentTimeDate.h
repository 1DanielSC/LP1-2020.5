#ifndef CURRENTTIMEDATE_H
#define CURRENTTIMEDATE_H

#include <string>

std::string get_current_date();
std::string get_current_time();
std::string format_current_date(const std::string &format);

#endif