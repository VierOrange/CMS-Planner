#include <cmsp/product/product.h>
#include <string>
class Manufacturer : public Product
{
public:
    Manufacturer(std::string n) : Product(n)
    {
    }
};
