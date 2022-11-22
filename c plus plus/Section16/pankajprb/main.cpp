#include <iostream>

class base {
    public:
            void say_hello() const {
               std::cout <<"I am a base class object " << std::endl;
    }
};

class derived: public base {
public :
    void say_hello() const{
        std::cout << "I am a derived class object" << std::endl; 
    }
};

    
    void greetings (const base &acc){
        std::cout <<"greetings ";
        acc.say_hello();
    }

int main () {
    base b ;
    b.say_hello();
    
    derived d;
    d.say_hello();
    
    greetings(b);
    greetings(d);
    
}