#include <iostream>
#include <string>
#include <vector>

#include "include/lexer.hpp"

void usage() {
    using namespace std;

    cout << "Usage: ethanol <filename>" << endl;
}

int main(int argc, char* argv[]) {
    using namespace std;

    if (argc != 2) {
        usage();
        return 1;
    }

    string filename(argv[1]);
    if (filename.length() < 5) {
        cout << "Invalid filename." << endl;
        return 1;
    }

    string extension = filename.substr(filename.length() - 4, 4);
    if (extension != ".etl") {
        cout << "Not an .etl file." << endl;
        return 1;
    }

    Lexer lexer(filename);
    lexer.print_file();

    // try reducing the number of classes by cutting the SymbolTable class

    // as tokens are found in the source file, they are pushed into here.
    // read more chapter 2 of dragon book before moving too much farther
    std::unordered_map<std::string, Token_Info> symbol_table;




    // TODO:
    // create a symbol-table for lexing

    // token: <token-name, attribute-value>
    //        token name being type of token, value being place in table



    // preprocessor();
    // lexer();
    // parser();

    // using nasm and
    // gnu linker for last steps

    return 0;
}