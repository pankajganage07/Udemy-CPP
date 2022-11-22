#include <iostream>
#include <vector>

using namespace std;


int main () {
    
    char selection{};
    vector<int> numbers{10,20,30,40,50};
    
   do { 
 cout << "P - print numbers"<< endl;
 cout << "A- Add a number to a list" << endl;
 cout << "M - display mean of numbers" << endl;
 cout << "S - Display smallest number" << endl;
 cout << "L - Display largest number" << endl;
 cout << "Q - Quit program" << endl;
 cout << "Enter your choice: ";
 cin >> selection;
 
 
 
 
    if(selection == 'p'||selection == 'P'){
       if (numbers.size()==0)
          cout << "list is empty" << endl;
       else{
           cout << "[";
              for (auto num: numbers)
              cout << num << " ";
       cout << "]" << endl;
       }
 
      }else if(selection == 'A' || selection == 'a'){
                  int add_number{};
              cout << "Enter a intger to add: ";
              cin >> add_number;
              numbers.push_back(add_number);
              cout << add_number << "added to list" << endl;
         
         
     }else if(selection == 'm' || selection == 'M'){
             int mean{};
             int total{0};
               if(numbers.size() == 0){ 
               cout << "can not calculate mean" << endl;
            }    else{
                    for(auto num: numbers)
                    total = total+num;
                    mean = total/numbers.size();
             cout <<mean << endl;
            }
    }
       else if (selection == 's'|| selection == 'S'){
                if (numbers.size() == 0)
                   cout << "unable to detect smallest number" << endl;
                   else{
                        int smallest = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
                           
                   }}
          
          else if (selection == 'l' || selection == 'L'){
                   if(numbers.size() == 0)
                       cout << "unable to detect largest number" << endl;
                       else{
                           int largest = numbers.at(0);
                           for(auto num: numbers)
                               if (num> largest)
                                   largest = num;
                        cout << largest << endl;
                        
                       }}
 
          else if (selection== 'q' || selection =='Q'){
          cout << "goodbye" << endl;}
            
            else
            {cout << "unknown selection ,try again" << endl;}
            
 
 
 
 
 
 
 
 
 
 }while (selection !='q' && selection != 'Q');
    return 0;
    
}