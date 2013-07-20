#include <iostream>

using namespace std;
/* Write and test a program that instantiates a function template that
 * returns a minimum of two values */
template <class T>
T find_minimum(T m, T n) {
  if(m < n)
		return m;
	else
		return n;
}

int main(void) {
	double a, b;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	double c = find_minimum(a,b);
	cout << "The minimum of the two is: "<< c << endl;
	return 0;
}
