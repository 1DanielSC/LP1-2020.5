#include "Date.h"
#include <sstream>
#include "CurrentTimeDate.h"

Date::Date()
	:year{0}, month{0}, day{0} {}

void Date::set_from_string(const std::string& date)
{
	std::stringstream stream(date);
	char discard; //O tipo da variavel ira dizer o que eu quero descartar
		//Os dados, que nao serao utilizados, serao colocados nessa variavel

	stream >> this->day;
	stream >> discard;
	stream >> this->month;
	stream >> discard;
	stream >> this->year;

}
std::string Date::to_string()
{
	std::string buff;
	std::stringstream stream;
	
	stream << this->day;
	buff = stream.str() + '/';
	stream.str("");

	stream << this->month;
	buff += stream.str() + '/';
	stream.str("");

	stream << this->year;
	buff += stream.str() + '/';
	stream.str("");


	return buff;
}