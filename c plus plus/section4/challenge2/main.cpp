#include <iostream>

using namespace std;

int main () {
    
    cout << "welcome to frank cleaning service" << endl;
    cout << "how many small rooms would you like cleaning: " << endl;
    int small_room;
    cin >>small_room;
    cout << "how many large rooms would you like cleaning: " << endl;
    int large_room;
    cin >> large_room;
    
    cout << "estimate of carpet cleaning company" <<endl;
    cout << "Number of small rooms " << small_room << endl;
    cout << "price per small room " <<25 << endl;
    cout << "number of large rooms "<< large_room << endl;
    cout << "price per large room " <<35 <<endl;
    cout << "tax " <<6<<" percent"<< endl;
    cout << "cost "<<( small_room*25+large_room*35)+(small_room*25+large_room*35)*0.06<< endl;
    
    return 0;
}

