#include <iostream>
#include <string>

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

    // once you know the given file should work,
    // call the lexer to tokenize the file contents.

    // preprocessor();
    // lexer();
    // parser();

    // using nasm and
    // gnu linker for last steps

    return 0;
}