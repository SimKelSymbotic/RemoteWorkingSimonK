#pragma once

#include <string>

class Person
{
private:
    std::string firstName;
    std::string lastName;
public:
    Person(std::string fn, std::string ln);
    std::string ToString() const;
};