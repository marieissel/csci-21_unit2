/*
 * Name        : temperature.cpp
 * Author      : Marie Issel
 * Description : Class Header File
 */


#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE

Temperature::Temperature()
{
    kelvin_ = 0;
    
}

Temperature::Temperature(double kelvin)
{
    kelvin_ = kelvin;
    
}

Temperature::Temperature(double temp, char unit)
{
    unit = toupper(unit);
    if (unit == 'F')
    {
        temp =  (temp + 459.67) * (5.0/9.0);
    }
    else if (unit == 'C')
    {
        temp = temp + 273.15;
        
    }
    kelvin_ = temp;
}

void Temperature::SetTempFromKelvin(double kelvin)
{
    kelvin_ = kelvin;
    
}

void Temperature::SetTempFromCelsius(double celsius)
{
    kelvin_ = celsius + 273.15;
    
}

void Temperature::SetTempFromFahrenheit(double fahrenheit)
{
    kelvin_ = (fahrenheit + 459.67) * (5.0/9.0);
}

double Temperature::GetTempAsKelvin() const
{
    return kelvin_;
}

double Temperature::GetTempAsCelsius() const
{
    return kelvin_ - 273.15;
}

double Temperature::GetTempAsFahrenheit() const
{
    return  (kelvin_ * (9.0/5.0)) - 459.67;
}

string Temperature::ToString(char unit) const
{
    double convert;
    std::stringstream ss;
    unit = toupper(unit);
    if (unit == 'F')
    {
        convert = GetTempAsFahrenheit();
        ss << std::setprecision(2) << std::fixed << convert << " Fahrenheit";
    }
    else if (unit == 'C')
    {
        convert = GetTempAsCelsius();
        ss << std::setprecision(2) << std::fixed << convert << " Celsius";
    }
    else if (unit == 'K')
    {
        convert = GetTempAsKelvin();
        ss << std::setprecision(2) << std::fixed << convert << " Kelvin";
    }
    else
    {
        ss << "Invalid Unit";
    }
    return ss.str();
}

    /*
int main ()
{
    
    
    
}
//*/