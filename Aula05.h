#include <string>

struct Time
{
	std::string hora;

	std::string getHora();
	void setHora(const std::string& _hora);

	
};

struct Date
{
	std::string data;

	std::string getData();
	void setData(const std::string& _data);

	void increaseDay();
	void increaseMonth();
	void increaseYear();
};

struct Content
{
	std::string mensagem;

	std::string getMensagem();
	void setMensagem(const std::string& _mensagem);

	void UpperCase();
	void LowerCase();

	void concatenate(const std::string& other_string);
	void multiplicate(const int numberTimes);
};

struct Message
{
	Time time;
	Date date;
	Content content;

	bool compare_dates(const Message& other_dates);
	bool compare_times(const Message& other_times);

	bool WriteFile();
	void print();
};
