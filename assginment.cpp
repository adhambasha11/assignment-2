#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;
void  center(float[], float& x, float& y);
void generateA(float A[]);
void generateB(float B[]);
int main() {
	float* a;
	float* b;
	int s;
	float C[4];
	point p;

	a = new float[100];
	b = new float[100];
	
	float xA=0, yA=0,xB=0,yB=0,a1[100];
	generateA(a); 
	generateB(b);
	center(a,xA,yA);
	center(b,xB,yB);

	
	for (int i = 0; i < 20; i++) {
		float x= 5 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 95);
		float y= 5 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 95);
		p.setx(x);
		p.sety(y);
		p.display();
		if (p.distance(xA, yA) < p.distance(xB, yB)) 
			cout << " p is closer to cluster A with distance of " << p.distance(xA, yA)<<endl;
		else 
			cout << " p is closer to cluster B with distance of " << p.distance(xB, yB) << endl;
		
	}
	

	return 0;
}
void center(float c[], float&x,float& y) {
	float sum = 0;
	for (int i = 0; i < 100; i += 2)
		sum = sum + c[i];
	 x = sum / 50;
	
	sum = 0;
	for (int j = 1; j < 100; j += 2)
		sum = sum + c[j];
	y = sum / 50;
	
}

void generateA(float A[])
{
	for (int i = 0; i < 100; i += 2)
		A[i] = 70 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
	for (int j = 1; j < 100; j += 2)
		A[j] = 70 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
}
void generateB(float B[]) {
	
	for (int i = 0; i < 100; i += 2)
		B[i] = 20 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
	for (int j = 1; j < 100; j += 2)
		B[j] = 20 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
}


