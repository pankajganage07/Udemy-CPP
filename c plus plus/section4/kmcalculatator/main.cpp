#include <iostream>

using namespace std;

int main () {
    const int mperkm {1000};
    double km;
    
    cout << "enter km travelled: ";
    cin >>km;
    cout << "total meters travelled: " << km*mperkm << endl;

    return 0;
}