#include "Sifra.h"

// Konstruktor klase
Sifra::Sifra(const std::string& txt, const std::string& kljuc) : text(txt), key(kljuc) {}

// Metoda za enkripciju
std::string Sifra::encrypt() {
    encryptedText = text; // Pohranite u encryptedText umjesto text
    for (size_t i = 0; i < text.length(); ++i) {
        encryptedText[i] = text[i] + key[i % key.length()];
    }
    return encryptedText;
}

// Metoda za dekripciju
std::string Sifra::decrypt() {
    std::string decryptedText = encryptedText; // Koristite encryptedText umjesto text
    for (size_t i = 0; i < encryptedText.length(); ++i) {
        decryptedText[i] = encryptedText[i] - key[i % key.length()];
    }
    return decryptedText;
}
