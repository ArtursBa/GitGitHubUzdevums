#include <iostream>
#include "Name.h"
using namespace std;

class Arturs: public Name
{
	public:
		Arturs(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
