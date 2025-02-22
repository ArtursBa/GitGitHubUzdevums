#include <iostream>
#include "Name.h"
#include "Arturs.h"

using namespace std;

Arturs::Arturs(string n)
{
	name=n;
}

void Arturs::setName(string n)
{
	name=n;
}

void Arturs::Print() const
{
	cout << name << endl;
}
