#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello! It is substitution cipher." << endl
         << "Enter your message to encrypt it: ";
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"qwertyuiopasdfghjklzxcvbnmMNBVCXZLKJHGFDSAPOIUYTREWQ"};
    string message;     
    getline(cin, message);
    int position {0};
    cout << "Encrypting message..." << endl
         << "Encrypted message: ";
    for (size_t i = 0; i < message.length(); i++)
    {
        for (size_t j = 0; j < alphabet.length(); j++)
        {
            if (message.at(i) == alphabet.at(j)) {
                position = alphabet.find(message.at(i));
                message.at(i) = key.at(position);
                break;
            }
        }
        cout << message.at(i);
    }    
    cout << "\nHave a nice day!" << endl;

    system("pause");
    return 0;
}
