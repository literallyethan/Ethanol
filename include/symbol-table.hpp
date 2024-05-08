#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <unordered_map>
#include <string>

class SymbolTable {

private:
    // the second string in this map would be the token info
    std::unordered_map<std::string, std::string> symbol_table;

public:
    // need some kind of struct, class, or data structure for token info
};

#endif