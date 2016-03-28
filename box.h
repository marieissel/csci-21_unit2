 /*
 * Name        : box.h
 * Author      : Marie Issel
 * Description : 
 */

#ifndef LAB_V
#define LAB_V

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;


template <class T>
class Box
{
    private:
        T _data;

    public: 
        Box() { _data = T(); }
        
        Box(T value) { _data = value; }

        void setContents(T value)
        {
            _data = value;
        }
    
        T getContents() const
        {
            return _data;
        }
        
        friend std::ostream& operator << (std::ostream &out, const Box<T> &b) 
        {
            std::stringstream ss;
            out << b.getContents();
            out << ss.str();
            return out;
        }

};

template<class T>
T Sum(T tArray[], int nElements)
{
    T tSum = T();

    for (int i = 0; i < nElements; i++)
    {
        tSum += tArray[i];
    }

    return tSum;
};

  

#endif
