#include "include/lexer.hpp"

Lexer::Lexer(const std::string& filepath) 
    : filename(filepath), instream(filepath, std::ios::in)
{
    if (!instream.is_open()) {
        std::cout << "filestream failed to open.\n";
        exit(1);
    }
}