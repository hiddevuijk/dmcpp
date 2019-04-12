

#include <iostream>
#include <string>
#include <vector>


#include "complex.h"

using namespace std;

int main()
{

	complex z,c;
	z.set(1.1,1.);
	c.set(1.1,0.);
	z.x = 3;

	double* p = &z.x;
	*p = 4;
	cout << z.x << endl;


	return 0;
}



