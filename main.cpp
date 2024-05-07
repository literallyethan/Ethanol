#include <iostream>
#include <string>
#include <fstream>

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

    std::string filename(argv[1]);
    if (filename.length() < 5) {
        cout << "Invalid filename." << endl;
        return 1;
    }

    if ((filename.substr(filename.length() - 4, 4) != ".etl")) {
        cout << "Not an .etl file." << endl;
        return 1;
    }



    return 0;
}