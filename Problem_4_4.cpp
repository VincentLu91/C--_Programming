#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
using namespace std;

// question 4.4

int main() {
    for (int i=0; i<8; i++)
      if(i%2==0) cout << i+1 << "\t";
      else if(i%3==0) cout << i*i << "\t";
      else if(i%5==0) cout << 2*i-1 << "\t";
      else cout << i << "\t";
}
