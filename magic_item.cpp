/*
 * Name        : magic_item.cpp
 * Author      : Marie Issel
 * Description : 
 */

#include "magic_item.h"



MagicItem::MagicItem(string name, unsigned int value, string description, unsigned int mana)
{
    set_name(name);
    set_value(value);
    description_ = description;
    mana_required_ = mana;
}

MagicItem::~MagicItem(void) { }

string MagicItem::description() const {
    return description_; 
}

unsigned int MagicItem::mana_required() const {
    return mana_required_; 
}

void MagicItem::set_description(string description) {
    description_ = description;
}

void MagicItem::set_mana_required(unsigned int mana) {
    mana_required_ = mana;
}

string MagicItem::ToString() const {
    std::stringstream ss;
    ss << name() << ", $" << value() << ", " << description_ << ", requires " << mana_required_ << " mana"; 
    return ss.str();
}
