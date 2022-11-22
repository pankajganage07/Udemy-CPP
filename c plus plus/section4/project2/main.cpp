#include <iostream>

using namespace std;
int main() {
    // calculating area of room in square feet
    int width {0};
    int length {0};
    cout <<"what is width of room: ";
    cin >>  width;
    cout <<"what is length of room: ";
    cin>> length;
    cout << "the area of room is " <<length*width << " square feet";
    
    return 0;
}