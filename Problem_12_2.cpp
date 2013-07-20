#include <iostream>
using namespace std;

/* Implement the class hierarchy on shapes */

class Shape {
  public:
		virtual void print() = 0;
		virtual double area() = 0;
};
class _2D : public Shape {
	public:
		virtual double perimeter() = 0;
};

class _3D : public Shape {
	public:
		virtual double volume() = 0;
};

class Triangle : public _2D {
	private:
		double side1, side2, base, height;
	public:
		Triangle(double S1, double S2, double B, double H);
		double perimeter();
		double area();
		void print();
};

class Rectangle : public _2D {
	private:
		double side1, side2;
	public:
		Rectangle(double S1, double S2);
		double perimeter();
		double area();
		void print();
};

Triangle :: Triangle (double S1, double S2, double B, double H) {
	side1 = S1;
	side2 = S2;
	base = B;
	height = H;
}

double Triangle :: perimeter() {
	return side1 + side2 + base;
}

double Triangle :: area() {
	return (base*height)/2;
}

void Triangle :: print() {
	cout << "Side1: " << side1 << endl;
	cout << "Side2: " << side2 << endl;
	cout << "Base: " << base << endl;
	cout << "Height: " << height << endl;
	cout << "Perimeter: " << perimeter() << endl;
	cout << "Area: " << area() << endl;
};

Rectangle :: Rectangle (double S1, double S2) {
	side1 = S1;
	side2 = S2;
}

double Rectangle :: perimeter() {
	return 2*(side1 + side2);
}

double Rectangle :: area() {
	return side1*side2;
}

void Rectangle :: print() {
	cout << "Side1: " << side1 << endl;
        cout << "Side2: " << side2 << endl;
        cout << "Perimeter: " << perimeter() << endl;
        cout << "Area: " << area() << endl;
}




int main() {
	double s1, s2, s3, s4;
	cout << "Enter the dimensions of the triangle: " << endl;
	cout << "S1: ";
	cin >> s1;
	cout << "S2: ";
	cin >> s2;
	cout << "B: ";
	cin >> s3;
	cout << "H: ";
	cin >> s4;
	Triangle t1 (s1, s2, s3, s4);
	t1.print();

	cout << "Enter the dimensions of the rectangle: " << endl;
	cout << "S1: ";
	cin >> s1;
	cout << "S2: ";
	cin >> s2;
	Rectangle r1(s1, s2);
	r1.print();


	return 0;
}
