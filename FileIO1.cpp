// File I/O: 1
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ofstream myfile("input_output.txt", ios::out | ios::app | ios::binary);
//  string line;
  // now that the object's created, let's write some text there.
  if(myfile.is_open()) {
    myfile << "here i'm doing output, only..." << endl;
    myfile << "here's another line...well i'm fooling around here in this file" << endl;
    myfile.close();
  }
  else
    cout << "File can't be opened" << endl;
  return 0;
}
  
  
