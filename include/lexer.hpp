#ifndef LEXER_H
#define LEXER_H
#include <string>
#include <fstream>

class Lexer {
private:
    std::string filename;
    std::ifstream instream;
    std::ofstream outstream;

public:
    Lexer(const std::string& filepath);

    ~Lexer();

    void print_file();
};

#endif