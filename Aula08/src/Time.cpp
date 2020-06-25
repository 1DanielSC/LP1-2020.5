#include "Time.h"
#include "CurrentTimeDate.h"
#include <sstream>

Time::Time()
	:hour{0}, minute{0}, second{0} {}


void Time::set_from_string(const std::string& time)
{
	std::stringstream stream(time);

	char discard;

	stream >> this->hour;
	stream >> discard;
	stream >> this->minute;
	stream >> discard;
	stream >> this->second;
}

std::string Time::to_string()
{
	std::string buff;
	std::stringstream stream;
	
	stream << this->hour;
	buff = stream.str() + '/';
	stream.str("");

	stream << this->minute;
	buff += stream.str() + '/';
	stream.str("");

	stream << this->second;
	buff += stream.str() + '/';
	stream.str("");


	return buff;
}