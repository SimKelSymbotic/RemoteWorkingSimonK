#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "People:\n\n";

    Person p1("Joe", "Bloggs");
    cout << "\t" << p1.ToString() << endl;
    
    Person p1("Brian", "Bloggs");
    cout << "\t" << p1.ToString() << endl;

    cout << endl;

    return 0;
}
