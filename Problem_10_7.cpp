#include <iostream>
using namespace std;
/* Implement a Matrix class for 2-by-2 matrices. Include a default
 * constructor, a copy constructor,
 * an inverse() function that returns the inverse of the
 * matrix, a det() function that returns the determinant of the matrix,
 * a Boolean function isSingular() that returns 1 or 0 according to
 * whether the determinant is zero, and a print() function. */

class Matrix {
  private:
		double a, b, c, d;
	public:
		Matrix(); // default constructor
		Matrix(double A, double B, double C, double D);
		Matrix inverse();
		double det();
		bool isSingular();
		void print();
};

Matrix :: Matrix () {
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

Matrix :: Matrix (double A, double B, double C, double D) {
	a = A;
	b = B;
	c = C;
	d = D;
}

double Matrix :: det() {
	double determinant = a*d - b*c;
	return determinant;
}

Matrix Matrix :: inverse() {
	double k = 1/det();
	Matrix inv_Matrix(k*d, -k*b, -k*c, k*a);
	return inv_Matrix;
}

bool Matrix :: isSingular() {
	if (det() == 0)
		return true;
	else
		return false;
}

void Matrix :: print() {
	cout << "a = " << a << "   b = " << b << endl;
	cout << "c = " << c << "   d = " << d << endl;
}

int main() {
	Matrix s_Matrix(1.3, 4.5, 2.5, 7.4);
	s_Matrix.print();
	double d = s_Matrix.det();
	cout << "Determinant of s_Matrix: " << d << endl;
	return 0;
}
