#pragma once

#include <queue>
#include <string>
#include <utility>
#include <vector>

class Item
{
private:
    static unsigned int numItem;
    static std::queue<unsigned int> dumpedID;

    static unsigned int generateID();

    std::string name;
    const unsigned int id;
    std::vector<std::pair<unsigned int, float>> rateList;

public:
    Item(std::string name);
    virtual ~Item();
    virtual std::string getType() const = 0;
    const std::string &getName() const;
    unsigned int getID() const;
    void setName(std::string newName);

    void setRate(unsigned int id,float rate);
    float getRate(unsigned int id = 0);
};
