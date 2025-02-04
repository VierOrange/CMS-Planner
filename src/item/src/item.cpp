#include <cmsp/item/item.h>
#include <queue>
#include <string>

unsigned int Item::numItem = 0;
std::queue<unsigned int> Item::dumpedID{};

unsigned int Item::generateID()
{
    unsigned int idt = numItem++;
    if (!dumpedID.empty())
    {
        idt = dumpedID.front();
        dumpedID.pop();
    }
    return idt;
}
Item::Item(std::string n) : name(n), id(generateID())
{
}

Item::~Item()
{
    dumpedID.push(id);
    --numItem;
}
const std::string &Item::getName() const
{
    return name;
}
unsigned int Item::getID() const
{
    return id;
}
void Item::setName(std::string nn)
{
    name = nn;
}
void Item::setRate(unsigned int id, float rate)
{
}
float Item::getRate(unsigned int id)
{
    return 0;
}
