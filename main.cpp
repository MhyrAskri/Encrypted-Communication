#include <iostream>
#include <string>

using namespace std;

int main() {

    const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890."};
    const string key {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm!#$%^&*/+-="};

    string secret_message;
    cout << "Enter your message:";
    getline(cin , secret_message);

    string encrypted_message;

    cout << "\nEncrypting message..." << endl;

    for (char c : secret_message) {

        size_t position = alphabet.find(c);

        if (position != string::npos) {

            char new_char { key.at(position) };
            encrypted_message += new_char;

        } else {

            encrypted_message += c;

        }

    }

    cout << "\nEncrypted message: " << encrypted_message << endl << endl;

    cout << "Do you wanna decrypt message(Y/N)?";
    char selection;
    cin >> selection;

    string decrypted_message;

    if (selection == 'y' || selection == 'Y') {

        for (char c : encrypted_message) {

            size_t position = key.find(c);

            if (position != string::npos) {

                char new_char { alphabet.at(position) };
                decrypted_message += new_char;

            } else {

                decrypted_message += c;

            }

        }

        cout << "\nDecrypted message: " << decrypted_message << endl << endl;

    } else {

        cout << "\nGoodbye..." << endl;

    }

    return 0;
}
