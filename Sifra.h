#ifndef SIFRA_H
#define SIFRA_H

#include <string>
#include <iostream>
#include <fstream>

class Sifra {
private:
    std::string text;
    std::string key;

public:
    // Constructor
    Sifra(const std::string& text);

    // Methods to encrypt and decrypt text
    std::string encrypt();
    std::string decrypt();
};

#endif // SIFRA_H

