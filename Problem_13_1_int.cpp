#include <iostream>

using namespace std;

int find_minimum(int m, int n) {
  if(m < n)
		return m;
	else
		return n;
}

int main(void) {
	int a, b;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	int c = find_minimum(a,b);
	cout << "The minimum of the two is: "<< c << endl;
	return 0;
}
