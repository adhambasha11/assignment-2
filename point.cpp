#include "point.h"

void point::display()
{
	cout << "the point that is tested is (" << getx() << "," << gety() << ")\n";
}

double point::distance(float&xc,float&yc)
{
	double distance;
		int count = 1;
		distance = sqrt(pow(getx() - xc, 2) + pow( gety() - yc, 2));
		return distance;
}
