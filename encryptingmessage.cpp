#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main() {
    cout << "Enter your secret message" << endl;
    string user_typo;
    getline(cin , user_typo);
    
    string alphabets {" 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string encrypted_alphabets {"qwertyuiopasdfghjklzxcvbn'mLKJHGFDSAPOIUYTREWQMNBVCXZ "};
    string final_encryption {};
    
    cout << "Encrypting message................." << endl;
    
    for (auto i: user_typo) {
        size_t position = alphabets.find(i);
        
        if ( position == string::npos ){
            final_encryption += i;
        }
        else {
           char a { encrypted_alphabets.at(position)};
           final_encryption += a;
        }
    }
    cout << final_encryption << endl;
    return 0;
}