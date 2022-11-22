// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <iomanip>
#include <fstream>

void ruler () {
    std::cout << "12345678901234567890123456789012345678901234567890" << std::endl;
}
int main() {
    ruler();
    
    std::cout << std::setw(10) << std::left << "Students"
              << std::setw(10) << std::right << "Score" << std::endl;
    std::cout << std::setw(50) << std::setfill('-') << "" << std::endl;
    
    return 0;
}

