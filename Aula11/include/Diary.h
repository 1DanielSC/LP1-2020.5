#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"

#include <string>
#include <vector>

struct Diary
{
    Diary(const std::string& filename);

    std::string filename;

    std::vector<Message> messages;

    void add(const std::string& message);
    bool write();
    bool load();
    bool verifyDate(const std::string& filename, const std::string& date);

    std::vector<Message*> search(const std::string& s);
};
#endif
