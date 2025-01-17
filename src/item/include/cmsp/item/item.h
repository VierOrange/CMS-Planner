#include <queue>
#include <string>

class Item
{
private:
    std::string name;
    const unsigned int id;
    static unsigned int numItem;
    static std::queue<unsigned int> dumpedID;

    static unsigned int generateID();

public:
    Item(std::string n);
    ~Item();
    const std::string &getName() const;
    unsigned int getID() const;
    void setName(std::string nn);
};
