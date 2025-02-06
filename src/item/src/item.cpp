#include <algorithm>
#include <cmath>
#include <cmsp/item/item.h>
#include <queue>
#include <string>
#include <utility>

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
    if (rate <= 0)
    {
        rateList.erase(id);
    }
    else
    {
        rateList[id] = rate;
    }
}
float Item::getRate(unsigned int id)
{
    auto it = rateList.find(id);
    if (it == rateList.end())
    {
        return 0;
    }
    else
    {
        return it->second;
    }
}

std::vector<std::pair<unsigned int, int>> Item::getNumMan(float rate) const
{
    std::vector<std::pair<unsigned int, int>> res{};
    for (auto const &p : rateList)
    {
        res.emplace_back(p.first, static_cast<int>(std::ceil(rate / p.second)));
    }
    return res;
}
