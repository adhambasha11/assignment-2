#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;
// declaring functions
void  center(float[], float& x, float& y); 
void generateA(float A[]);
void generateB(float B[]);
int main() {
	// declaring dynamic arrays for cluster A and B
	float* a;
	float* b;
	int s; // declaring size of array
	
	point p; // declaring point p of type point

	a = new float[100];
	b = new float[100];
	
	float xA=0, yA=0,xB=0,yB=0; // declaring center x and y points for cluster A and B
	generateA(a); // generating random points for cluster A 
	generateB(b); // generating random points for cluster B
	center(a,xA,yA); // finding center of cluster A
	center(b,xB,yB); // finding center of cluster B

	// generating random points p to be tested
	for (int i = 0; i < 20; i++) {
		float x= 5 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 95);
		float y= 5 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 95);
		// setting the X and Y random values in the class
		p.setx(x);
		p.sety(y);
		p.display(); // showing the point that will be tested
		if (p.distance(xA, yA) < p.distance(xB, yB))  // testing to which cluster is the point p closer too
			cout << " p " << i + 1 << "is closer to cluster A with distance of " << p.distance(xA, yA) << endl;
		else
			cout << "p" << i + 1 << " is closer to cluster B with distance of " << p.distance(xB, yB) << endl;
		
	}
	

	return 0;
}
void center(float c[], float&x,float& y) { //function to find the center
	float sum = 0;
	for (int i = 0; i < 100; i += 2)
		sum = sum + c[i]; // finding the sum of x points
	 x = sum / 50; // dividing by the number of points
	
	sum = 0;
	for (int j = 1; j < 100; j += 2)
		sum = sum + c[j]; // finding the sum of y points
	y = sum / 50; // dividing by the number of points
	
}

void generateA(float A[])
{
	for (int i = 0; i < 100; i += 2)
		A[i] = 70 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20); // generating random float numbers from 70 to 90
	for (int j = 1; j < 100; j += 2)
		A[j] = 70 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20); // generating random float numbers from 70 to 90
}
void generateB(float B[]) {
	
	for (int i = 0; i < 100; i += 2)
		B[i] = 20 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20); // generating random float numbers from 20 to 40
	for (int j = 1; j < 100; j += 2)
		B[j] = 20 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20); // generating random float numbers from 20 to 40
}


