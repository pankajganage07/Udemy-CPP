//subsitituion cipher

#include <iostream>
#include <string>

using namespace std;

int main () {
    
    string secret_msg {};
    cout << "Enter your secret message" << endl;
    getline (cin , secret_msg);
    
    string encrypted_msg {};
    string decrypted_msg {};
    string msg {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string key {"zabcdwxyefghtuvijklqrtmnopABCDQRSEFGTUVHIJWXKLMYZNOP"};
    
    cout << "Encrypting message........." << endl;
    
    
    for (char c: secret_msg){
        size_t position = msg.find(c);
        if (position != string::npos){
            char new_c = key.at(position);
            encrypted_msg += new_c;
        }else encrypted_msg += c;
        }
    cout << encrypted_msg << endl;
    
    
   cout << "Decrypting message..........." << endl;
   

   for ( char c: encrypted_msg){
       size_t position = key.find(c);
       if (position != string::npos){
           char new_c = msg.at(position);
           decrypted_msg += new_c;
       }else decrypted_msg += c;
   }    
    cout << decrypted_msg << endl;
    
    
    return 0;
} 