/*
 * Name        : item.h
 * Author      : Marie Issel
 * Description : 
 */

#ifndef LAB_W
#define LAB_W

#include "item.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class MagicItem: public Item  {

    public:
    
        MagicItem(string name="magicitem", unsigned int value=0, string description="no description", unsigned int mana=0);
        virtual ~MagicItem(void);
        
        string description() const;
        unsigned int mana_required() const;
        
        void set_description(string description);
        void set_mana_required(unsigned int mana);
     
        string ToString() const;
    
    private:
    
        string description_;
        unsigned int mana_required_;
    
};


#endif
