#include <iostream>
using namespace std;
int main() {
    double value = 1234.5678;

    // Set precision to 2
    cout.precision(2);

    // Set width to 10 and fill with '-'
	cout.width(10);
    cout.fill('-');
	cout<< fixed;
    // Output the value with the set precision, width, and fill character
     cout << value <<  endl;

    return 0;
}


