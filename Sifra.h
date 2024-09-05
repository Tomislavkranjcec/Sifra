#ifndef SIFRA_H
#define SIFRA_H

#include <string>

class Sifra {
private:
    std::string text;
    std::string key;
    std::string encryptedText; // Nova varijabla za pohranu enkriptovanog teksta

public:
    // Konstruktor
    Sifra(const std::string& txt, const std::string& kljuc);

	// Metode za enkripciju i dekripciju
    std::string encrypt();
    std::string decrypt();
};

#endif // SIFRA_H

