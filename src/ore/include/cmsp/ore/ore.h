#include <cmsp/item/item.h>
#include <string>
class Ore : public Item
{
public:
    Ore(std::string n) : Item(n)
    {
    }
};
