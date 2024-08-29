#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Sifra {
private:
    string text;
    string key;

public:
    Sifra(const string& text);
    string encrypt();
    string decrypt();
};

Sifra::Sifra(const string& text) : text(text) {
    ifstream keyFile("kljuc.bin", ios::binary);  // Open the key file in binary mode
    if (keyFile.is_open()) {
		// Read the content of the file into the key string
		getline(keyFile, key, '\0');  // Read until null character (assuming key file is text-based)
		keyFile.close();
	} else {
		cerr << "Error opening kljuc.bin" << endl;
        // Handle error: For simplicity, set a default key
        key = "";  // Set an empty key if file cannot be read
    }
}

string Sifra::encrypt() {
    string encryptedText = text;
    for (size_t i = 0; i < text.length(); ++i) {
        encryptedText[i] = text[i] + key[i % key.length()];
    }
    return encryptedText;
}

string Sifra::decrypt() {
    string decryptedText = text;
    for (size_t i = 0; i < text.length(); ++i) {
        decryptedText[i] = text[i] - key[i % key.length()];
    }
    return decryptedText;
}

