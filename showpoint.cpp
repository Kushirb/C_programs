#include <iostream>

using namespace std;
//using namespace ios;

int main() {
    float value = 43.02;
    cout<<sizeof(value)<<endl;
    // Enable showpoint flag
    cout.precision(1);
    cout<<fixed;
    cout.setf(ios::showpoint);
	
    // Output the value with showpoint enabled
    cout<<value<<endl;

    return 0;
}


