#include "person.hpp"

Person::Person(std::string fn, std::string ln)
{
    firstName = fn;
    lastName = ln;
}

std::string Person::ToString() const
{
    return std::string(lastName + "; " + firstName);
}