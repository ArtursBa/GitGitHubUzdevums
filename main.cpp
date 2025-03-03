#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Arturs.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Arturs a;
	a.setName("Arturs");
	
	Arturs b;
	b.setName("Arturs");

	Names[0] = &a;
        Names[1] = &b;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
