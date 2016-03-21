/*
 * Name        : item.h
 * Author      : Marie Issel
 * Description : 
 */

#ifndef LAB_Y
#define LAB_Y

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class Item {
    
    public:
    
        Item(string name="item", unsigned int value=0);
    
        virtual ~Item(void);
    
        string ToString() const;
        
        string name() const;
        int value() const;
        
        void set_name(string name="item");
        void set_value(unsigned int value=0);
    
    private:

        string name_;
        unsigned int value_;

};

#endif
