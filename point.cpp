#include "point.h"

void point::display()
{
	cout << "the point that is tested is (" << getx() << "," << gety() << ")\n"; // displaying the point's x and y
}

double point::distance(float&xc,float&yc)
{
	double distance;
		distance = sqrt(pow(getx() - xc, 2) + pow( gety() - yc, 2)); // calculating the distance between p and center
		return distance;
}
