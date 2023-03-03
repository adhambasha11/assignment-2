#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;
void  center(float[], float[]);
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
	
	
	center(a, C);
	float aXc = C[0];
	float aYc = C[1];
	center(b, C);
	float bXc = C[0];
	float bYc = C[1];
	for (int i = 0; i < 20; i++) {
		float x= 5 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 95);
		float y= 5 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 95);
		p.setx(x);
		p.sety(y);
		p.display();
		if (p.distance(aXc, aYc) > p.distance(bXc, bYc)) 
			cout << " p is closer to cluster A with distance of " << p.distance(aXc, aYc)<<endl;
		else 
			cout << " p is closer to cluster B with distance of " << p.distance(bXc, bYc) << endl;
		
	}
	

	return 0;
}
void center(float c[], float z[]) {
	float sum = 0;
	for (int i = 0; i < 100; i += 2)
		sum = sum + c[i];
	z[0] = sum / 50;
	sum = 0;
	for (int j = 1; j < 100; j += 2)
		sum = sum + c[j];
	z[1] = sum / 50;

}

void generateA(float A[])
{
	for (int i = 0; i < 100; i += 2)
		A[i] = 70 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
	for (int j = 1; j < 100; j += 2)
		A[j] = 70 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
}
void generateB(float B[]) {
	
	for (int i = 0; i < 100; i = +2)
		B[i] = 20 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
	for (int j = 1; j < 100; j += 2)
		B[j] = 20 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / 20);
}


