#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
    cout << "Enter your code to decode it" << endl;
    string user_typo;
    getline(cin , user_typo);
    
    string alphabets {" 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string encrypted_alphabets {"qwertyuiopasdfghjklzxcvbnmLKJHGFDSAPOIUYTREWQMNBVCXZ48"};
    string final_encryption {};
    
    cout << "Decrypting message................." << endl;
    
    for (auto i: user_typo) {
        size_t position = encrypted_alphabets.find(i);
        if ( position == string::npos ){
            final_encryption += i;
        }
        else {
           char a { alphabets.at(position)};
           final_encryption += a;
        }
    }
    cout << final_encryption << endl;
    return 0;

