#include <iostream>
using namespace std;
class point {
private:
	float x;
	float y;
public:
	// constructors
	point() { x = 0; y = 0; };
	point(float x1, float y1) { x = x1; y = y1; };
	// setters and getters
	void setx(float x1) {
		x = x1;
	};
	void sety(float y1) {
		y = y1;
	};
	float getx() {
		return x;
	};
	float gety() {
		return y;
	};
	void display(); // declaring function to display point
	double distance(float& xc, float&yc); // declaring function to calculate the distance
}; 
