/*
 * Name        : lab_9.cpp
 * Author      : FILL IN
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"
#include <iomanip>

// CODE HERE -- CLASS FUNCTION DEFINITIONS

void Spaceship::set_name(string name)
{
    name_ = name;
}

void Spaceship::set_top_speed(double top_speed)
{
    top_speed_ = top_speed;
}

void Spaceship::set_fuel_source(string fuel_source)
{
    fuel_source_ = fuel_source;
}

void Spaceship::set_crew_capacity(int crew_capacity)
{
    crew_capacity_ = crew_capacity;
}

string Spaceship::name() const
{
    return name_;
}

double Spaceship::top_speed() const
{
    return top_speed_;
}

string Spaceship::fuel_source() const
{
    return fuel_source_;
}

int Spaceship::crew_capacity() const
{
    return crew_capacity_;
}

string Spaceship::ToString() const
{
    std::stringstream ss;
    ss << name_ << "\nTop Speed:     Warp " << std::setprecision(2) << std::fixed << top_speed_ << "\nFuel Source:   " << fuel_source_ << "\nCrew Capacity: " << crew_capacity_;
    return ss.str();
}

    /*
int main ()
{
    string out;
    
    Spaceship enterprise;
    enterprise.set_name("USS Enterprise-D");
    enterprise.set_top_speed(9.6);
    enterprise.set_fuel_source("Plasma");
    enterprise.set_crew_capacity(5000);
    out = enterprise.ToString();
    cout << out;
    
} //*/ 