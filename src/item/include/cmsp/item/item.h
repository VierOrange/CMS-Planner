#include <string>

class Item
{
    std::string name;

public:
    Item(std::string n);
    ~Item();
	std::string getName();
};
