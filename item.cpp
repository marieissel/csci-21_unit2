/*
 * Name        : item.cpp
 * Author      : Marie Issel
 * Description : 
 */

#include "item.h"


Item::Item(string name, unsigned int value) {
    name_ = name;
    value_ = value;
}

Item::~Item(void) { }

string Item::ToString() const {
    std::stringstream ss;
    ss << name_ << ", $" << value_;
    return ss.str();
}

string Item::name() const {
    return name_;
}

int Item::value() const {
    return value_;
}

void Item::set_name(string name) {
    name_ = name;
}

void Item::set_value(unsigned int value) {
    value_ = value;
}


    /* 
    
int main ()
{
    
    
    
    
    
}  */ 