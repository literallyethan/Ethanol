#ifndef LEXER_H
#define LEXER_H
#include <string>
#include <fstream>
#include <unordered_map>

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

//--------------------------------------------------------TOKEN_INFO;
struct Token_Info {
    //struct since it shouldnt be too complicated

    // what does a token need?
    /*
        --type name (will be key of map)
        --value of its type
        --scope
        --allocated storage somehow
        --line number
    */

    std::string value;
    int line_number;

};

//--------------------------------------------------------SYMBOL_TABLE;
/*class SymbolTable {
    //I wonder if this doesn't need to be a class

    // this is different from the token lookup table

private:
    // the string here is for the token type, like [RETURN]
    std::unordered_map<std::string, Token_Info> symbol_table;

public:
    
}; */

#endif