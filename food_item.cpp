/*
 * Name        : food_item.cpp
 * Author      : Marie Issel
 * Description : 
 */

#include "food_item.h"

FoodItem::FoodItem(string name, unsigned int value, unsigned int calories, string measure, double units)
{
    set_name(name);
    set_value(value);
    calories_ = calories;
    unit_of_measure_ = measure;
    units_ = units;
}

FoodItem::~FoodItem(void) { }

unsigned int FoodItem::calories() const {
    return calories_;
}

double FoodItem::units() const {
    return units_;
}

string FoodItem::unit_of_measure() const {
    return unit_of_measure_; 
}

void FoodItem::set_calories(unsigned int calories) {
    calories_ = calories;
}
void FoodItem::set_unit_of_measure(string measure) {
    unit_of_measure_ = measure;
}
void FoodItem::set_units(double units) {
    units_ = units;
}


string FoodItem::ToString() const
{
    std::stringstream ss;
    ss << name() << ", $" << value() << ", " << std::setprecision(2) << std::fixed << units() << " " << unit_of_measure() << ", " << calories() << " calories"; 
    return ss.str();
}