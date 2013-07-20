#include <cmath>
#include <iostream>
using namespace std;

/* Implement an overloaded assignment operator = for the Point class
 * (see Problem 10.1) */

class Point {
  private:
		double _x, _y, _z;
	public:
		Point(double X, double Y, double Z);
		Point(const Point& pt);
		void negate();
		double norm();
		void print();
		void operator=(const Point&);
};

Point :: Point(double X, double Y, double Z) {
	_x = X;
	_y = Y;
	_z = Z;
}

Point :: Point (const Point& pt) {
	_x = pt._x;
	_y = pt._y;
	_z = pt._z;
}

void Point :: negate() {
	_x = -1*_x;
	_y = -1*_y;
	_z = -1*_z;
}

double Point :: norm() {
	double Norm = sqrt(_x*_x + _y*_y + _z*_z);
	return Norm;
}

void Point :: print() {
	cout << "(" << _x << ", " << _y << ", " << _z << ")" << endl;
}

void Point :: operator=(const Point& pt) {
	_x = pt._x;
	_y = pt._y;
	_z = pt._z;
}

int main() {
	Point p1(3.4, 2.3, 6.9);
	p1.print();
	Point p2 = p1;
	p2.print();
	return 0;
}
