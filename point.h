#include <iostream>
using namespace std;
class point {
private:
	float x;
	float y;
public:
	point() { x = 0; y = 0; };
	point(float x1, float y1) { x = x1; y = y1; };
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
	void display();
	double distance(float& xc, float&yc);
};
