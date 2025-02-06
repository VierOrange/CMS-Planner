#pragma once

#include <cmsp/item/item.h>
#include <string>
class Ore : public Item
{
public:
    Ore(std::string name) : Item(name)
    {
    }
    virtual std::string getType() const override;
    virtual std::vector<std::pair<unsigned int, float>> getUpstreamRate(float rate) const override;
};
