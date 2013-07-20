#include <iostream>

using namespace std;

class Points {

  	friend Points operator+(const Points&, const Points&);
		friend Points operator*(const Points&, const Points&);
		friend bool operator >=(const Points&, const Points&);
		friend ostream& operator<<(ostream&, const Points&);
		friend istream& operator>>(istream&, Points&);
	private:
		int x;
		int y;
	public:
		Points(); // default constructor
		Points(int X, int Y); // alternative constructor
		Points& operator=(const Points&); // assignment operator
		Points& operator*=(const Points&); //*= operator
};

Points operator+(const Points& a, const Points& b) {
	int r_x = a.x + b.x;
	int r_y = a.y + b.y;
	Points s_Points(r_x, r_y);
	return s_Points;
}

Points operator*(const Points& a, const Points& b) {
	int r_x = a.x * b.x;
	int r_y = a.y * b.y;
	Points p_Points(r_x, r_y);
	return p_Points;
}

bool operator>=(const Points& a, const Points&b) {
	return (a.x + a.y >= b.x + b.y);
}

ostream& operator<<(ostream& out, const Points& pts) {
	return out << "Point (" << pts.x << " " << pts.y << ")";
}

istream& operator>>(istream& in, Points& pts) {
	return in >> pts.x >> pts.y;
}

Points :: Points() {
	x = 0;
	y = 0;
}

Points :: Points (int X, int Y) {
	x = X;
	y = Y;
}

Points& Points :: operator=(const Points& a) {
	x = a.x;
	y = a.y;
	return *this;
}

Points& Points :: operator*=(const Points& a) {
	x *= a.x;
	y *= a.y;
	return *this;
}

int main() {
	Points pt1, pt2;
	cout << "Enter the first point using x and y coordinates: ";
	cin >> pt1;
	cout << pt1 << endl;
	cout << "Enter the second point using x and y coordinates: ";
	cin >> pt2;
	cout << pt2 << endl;
	Points pt3 = pt1 + pt2;
	cout << pt1 << " + " << pt2 << " = " << pt3 << endl;
	Points pt4 = pt1 * pt2;
	cout << pt1 << " * " << pt2 << " = " << pt4 << endl;

	if (pt1 >= pt2)
		cout << pt1 << " is greater" << endl;
	else
		cout << pt2 << " is greater" << endl;

	cout << pt1 << " *= " << pt4 << " = ";
	pt1 *= pt4;
	cout << pt1 << endl;
	return 0;
}
