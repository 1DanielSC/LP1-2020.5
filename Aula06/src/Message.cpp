Message::Message(const string& message, const string& _date, const string& _time)
    	:content{message}, date{ set_from_string(_date) }, time{ set_from_string(_time) } {}