#pragma once

#include <queue>
#include <string>
#include <unordered_map>

class Item
{
private:
    static unsigned int numItem;
    static std::queue<unsigned int> dumpedID;

    static unsigned int generateID();

    std::string name;
    const unsigned int id;
	std::unordered_map<unsigned int,float> rateList;

public:
    Item(std::string name);
    virtual ~Item();
    virtual std::string getType() const = 0;
    const std::string &getName() const;
    unsigned int getID() const;
    void setName(std::string newName);

    void setRate(unsigned int id,float rate);
    float getRate(unsigned int id);
};
