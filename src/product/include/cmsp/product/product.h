#pragma once

#include <cmsp/item/item.h>
#include <string>
#include <unordered_map>
class Product : public Item
{
private:
    std::unordered_map<unsigned int, float> recipe;

public:
    Product(std::string name) : Item(name)
    {
    }

    virtual std::string getType() const override;

	void setRecipe(unsigned int id,float num);
	float getRecipe(unsigned int id);
};
