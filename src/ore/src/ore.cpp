#include <cmsp/ore/ore.h>
#include <utility>
#include <vector>

std::string Ore::getType() const
{
    return "Ore";
}

std::vector<std::pair<unsigned int, float>> Ore::getUpstreamRate(float rate) const
{
    return std::vector<std::pair<unsigned int, float>>{};
}
