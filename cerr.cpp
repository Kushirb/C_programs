#include <iostream>
using namespace std;
int main() {
  int num = 0;
  cin >> num;

  if (num == 0) {
    cerr << "Error: Division by zero is not allowed." << endl;
    return 1;
  }

  cout << "10 divided by " << num << " is " << 10/num << endl;
  return 0;
}


