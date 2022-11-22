//miles per gallon (exception handling)

#include <iostream>

double calculate_mpg(int miles, int gallons){
    if(gallons == 0)
        throw 0;
    if(miles < 0 || gallons < 0)
         throw std::string { "negative values"};    
    return static_cast<double> (miles)/gallons;  
}

int main () {
    int miles;
    int gallons;
    int i_miles_per_gallon;
    
    std::cout<< "Enter number of miles: ";
    std::cin >> miles; 
    
    std::cout << "Enter number of gallons: " ;
    std::cin >> gallons;
    
    try{
    i_miles_per_gallon = calculate_mpg(miles,gallons);
    std::cout << "Miles per gallon is: " << i_miles_per_gallon ;
    }
    
    catch (int &ex){ 
        std::cout << "Denominator can not be negative" << std::endl;
    }   
    
     catch (std::string &ex){
         std::cerr << ex ;
     }
    
    std::cout << "\nBye" << std::endl;
    
    return 0;
}
