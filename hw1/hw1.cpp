// hw1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector.hpp"

using namespace std;
using namespace DrDivMonster;


int main()
{
	Vector v1;
	cout << "Default constructor sets v1 values to 0: " << v1 << endl;

	Vector v2(2, 3, 4);
	cout << "Initialization vector makes v2's values 2,3,4: " << v2 << endl;

	Vector v3(v2);
	cout << "Copy constructor makes v3's values identical to v2: " << v3 << endl;

	cout << "\nThe first number in vector v2 is " << v2.getX() << endl;
	cout << "The second number is " << v2.getY() << endl;
	cout << "The third number is " << v3.getZ() << endl;

	v1.setX(10);
	v1.setY(21);
	v1.setZ(35);
	cout << "\nAfter using the setter constructor v1 has new values: " << v1 << endl;
	
	cout << "\nThe magnitude for v1 is " << v1.magnitude() << endl;

	cout << "\nDot product of v1 and v2: " << v1.dotproduct(v2);

	cout << "\nv1 + v2 = " << v1 + v2 << endl;

	cout << "v1 - v2 = " << v1 - v2 << endl;

	cout << "v1 * 3 = " << v1 * 3 << endl;

	cout << "5 * v2 = " << 5 * v2 << endl;

	cout << "v1 / 3 = " << v1 / 3 << endl;

	cout << "v1 pre += :" << v1 << endl;
	
	v1 += v2;

	cout << "v1 post += :" << v1 << endl;

	v1 -= v2;

	cout << "v1 post -= :" << v1 << endl;
		 
	return 0;
}

