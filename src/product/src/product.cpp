#include <cmsp/product/product.h>

std::string Product::getType() const
{
    return "Product";
}

void Product::setRecipe(unsigned int id, float num)
{
    if (num <= 0)
    {
        recipe.erase(id);
    }
    else
    {
        recipe[id] = num;
    }
}
float Product::getRecipe(unsigned int id)
{
    auto it = recipe.find(id);
    if (it == recipe.end())
    {
        return 0;
    }
    else
    {
        return it->second;
    }
}
std::vector<std::pair<unsigned int, float>> Product::getUpstreamRate(float rate) const
{
    std::vector<std::pair<unsigned int, float>> res{};
    for (auto const &p : recipe)
    {
        res.emplace_back(p.first, rate * p.second);
    }
    return res;
}
