#include <cmsp/item/item.h>
#include <string>
class Product : public Item
{
public:
    Product(std::string n) : Item(n)
    {
    }
};
