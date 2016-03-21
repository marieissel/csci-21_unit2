/*
 * Name        : food_item.h
 * Author      : Marie Issel
 * Description : 
 */

#ifndef LAB_X
#define LAB_X

#include "item.h"
#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class FoodItem: public Item {

    public:
    
        FoodItem(string name="fooditem", unsigned int value=0, unsigned int calories=0, string measure="nounits", double units=0.0);
        
        virtual ~FoodItem(void);
        
        string unit_of_measure() const;
        unsigned int calories() const;
        double units() const;
        
        void set_unit_of_measure(string measure);
        void set_calories(unsigned int calories);
        void set_units(double units);
     
        string ToString() const;
 
    private:
    
        unsigned int calories_;
        string unit_of_measure_;
        double units_;
    
};

#endif
