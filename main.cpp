#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "My Friends are your friends:\n\n";

    Person p1("Joe", "Bloggs");
    cout << "\t" << p1.ToString() << endl;

    Person p2("Brian F.", "Jones");
    cout << "\t" << p2.ToString() << endl;

	Person p3("Simon", "Kelly");
    cout << "\t" << p3.ToString() << endl;

    Person p4("Simon", "Kelly");
    cout << "\t" << p4.ToString() << endl;

    cout << endl;

    return 0;
}
