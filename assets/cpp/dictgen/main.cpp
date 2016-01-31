#include <cstring>
#include <iostream>
#include "permuter.cpp"


#define ENDL "\n"

using namespace std;


void showIntro() {
    cout << "Dictionary Generator v0.1 - Miguel Espinoza - http://purefan.me" << ENDL;
    cout << ENDL;
    cout << "[ This program takes words from a file and permutes them into a  ]" << ENDL;
    cout << "[ dictionary that can be used in brute force attacks.            ]" << ENDL;
    cout << "[ Intended only for educational purposes, do not use it for evil ]" << ENDL;
    cout << "[ By using this software you agree to release the author from    ]" << ENDL;
    cout << "[ any liability and responsibility.                              ]" << ENDL;
    cout << ENDL;
}


int main(int argc, char *argv[]) {
    // Read file with most common words
    showIntro();

    std::string sourcePath;
    std::string targetPath;

    if (argc > 1) {
        sourcePath = argv[1];
    } else {
        cout << "1. Path to a file with common words to permute: ";
        getline(cin, sourcePath);
    }

    if (argc > 2) {
        targetPath = argv[2];
    } else {
        cout << "2. Path to the target file: ";
        getline(cin, targetPath);
    }

    Permuter myPermuter = Permuter();
    myPermuter.setSourceFile(sourcePath);
    myPermuter.setTargetFile(targetPath);

    if (myPermuter.allGood() == true) {
        myPermuter.run();
    }

    /*
    // Read the file
    ifstream hFile(sourcePath);

    if (hFile.is_open()) {
        string line;
        int lines_count = std::count(std::istreambuf_iterator<char>(hFile), std::istreambuf_iterator<char>(), '\n');
        ofstream myfile;
        myfile.open("dict.txt", ios::out);


        while (hFile.good()) {
            getline(hFile, line);
            myPermuter.setWord(line);
        }
        hFile.close();
    }
    // Read each line
    // Convert the word to lower case
    // Add it to the outfile
    // Convert one letter at a time to upper case
    // Convert similar letters one at a time: O <-> 0, A <-> 4, I <-> 1
    // Add 1 digit in every position
    // Add 2 digits in every position

    myfile << "Test \n";
    myfile.close();*/
    return 0;
}