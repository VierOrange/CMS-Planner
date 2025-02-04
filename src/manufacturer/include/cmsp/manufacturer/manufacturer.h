#pragma once

#include <cmsp/product/product.h>
#include <string>
class Manufacturer : public Product
{
public:
    Manufacturer(std::string n) : Product(n)
    {
    }

    virtual std::string getType() const override;
};


