#include "include/lexer.hpp"
#include <iostream>

Lexer::Lexer(const std::string& filepath) 
    : filename(filepath), instream(filepath, std::ios::in)
{
    if (!instream.is_open()) {
       throw std::runtime_error("Failed to open input file: " + filepath);
    }
}

Lexer::~Lexer() 
{

}

void Lexer::print_file()
{
    std::string line;
    while (std::getline(instream, line)) {
        std::cout << line << '\n';
    }
}