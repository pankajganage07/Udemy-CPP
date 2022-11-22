#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

void print_menu();
char selectionf();

void display(vector<int> &v);
void add(vector<int> &v);
double mean(vector<int> &v);



void display_list(vector<int> &v);

int main () {
    char selection;
    vector<int> vec{1,2,3,4,5};
    double mean;
    
    
    
    do{
    
    print_menu();
    selection = selectionf();
    switch(selection) {
        case 'P':
             display(vec);
             break;
        case 'A':
              add(vec);    
        case 'M':
              calculated mean = mean(vec);
        
        
        
    }
    
    
    }while ( selection != 'Q');
       
    
    
    
    return 0;
}


void print_menu(){
    cout << "P  print list: "<< endl;
    cout << "A  add number to the list: "<< endl;
    cout << "M  find mean of list: "<< endl;
    cout << "S  find smallest number: "<< endl;
    cout << "L find largest number: "<< endl;
    cout << "Q  quit program "<< endl;
    
}

char selectionf(){
    char selected_option;
    cin >> selected_option;
    return toupper(selected_option);
}

void display(vector<int> &v){
        if (v.size() == 0)
            cout << "list empty" << endl;
        else display_list(v);
}

void display_list(vector<int> &v){
      for(auto cum : v)
          cout << cum << " ";
    cout << endl;
}

void add(vector<int> &v){
    int add_num{};
    cout << "add number: ";
    cin >> add_num;
    v.push_back(add_num);
    cout << add_num << " added to list" << endl;
}

double mean(vector<int> &v){
    int total;
    for (auto cum : v)
        total += cum;
        
     total = total/v.size;   
}