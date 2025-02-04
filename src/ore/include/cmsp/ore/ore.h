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
};
