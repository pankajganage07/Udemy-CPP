
//creating an exchanger

#include <iostream>
using namespace std;

int main () {
    
    const int note2000value {2000};
    const int note1000value {1000};
    const int note500value {500};
    const int note100value {100};
    const int note50value {50};
    const int note20value {20};
    const int note10value {10};
    const int note5value {5};
    const int note2value {2};
    
    int note2000{}, note1000{}, note500{}, note100{}, note50{}, note20{}, note10{}, note5{}, note2{}, note1{}, balance{}, value{};
    
    cout << "Enter number of rupees you wanna exchange: " ;
    cin >> value;
    
    note2000 = value/note2000value;
    balance = value - (note2000*note2000value);
    
    note1000 = balance/note1000value;
    balance -= note1000*note1000value;
    
    note500 =balance/note500value;
    balance-=note500*note500value;
    
    note100 =balance/note100value;
    balance-= note100*note100value;
    
    note50 = balance/note50value;
    balance-=note50*note50value;
    
    note20 = balance/note20value;
    balance-= note20* note20value;
    
    note10 = balance/note10value;
    balance-= note10*note10value;
    
    note5 = balance/note5value;
    balance-= note5*note5value;
    
    note2 = balance/note2value;
    balance-= note2*note2value;
    
    note1 = balance;
    
    cout <<"2000: " << note2000 << endl;
    cout << "1000: " << note1000 << endl;
    cout << "500: " << note500 << endl;
    cout << "100: " << note100 << endl;
    cout << "50: " << note50 << endl;
    cout <<"20: " << note20 << endl;
    cout << "10: " << note10 << endl;
    cout << "5: " << note5<< endl;
    cout << "1: " << note1 << endl;
    
    
    return 0;
    
} 