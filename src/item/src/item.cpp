#include<cmsp/item/item.h>
#include <string>

Item::Item(std::string n):name(n){}
Item::~Item(){}
std::string Item::getName(){return name;}
