/*
 * test the inter routine
 */

#include <iostream>
#include "interpy.hpp"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	
	const int ARRAYSIZE = 2;
	double x[ARRAYSIZE] = {2.3, 18.7}, y[ARRAYSIZE] = {41,82};

	
	cout << "The interpolated value of the function is " << interpy(x, y, 9) << endl;
	return 0;
}

