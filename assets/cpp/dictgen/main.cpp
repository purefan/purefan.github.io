#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <unicode/unistr.h>
#include <unicode/ustream.h>


#define ENDLINE "\n"

using namespace std;


void showIntro() {
    cout << "Dictionary Generator v0.1 - Miguel Espinoza - http://purefan.me" << ENDLINE;
    cout << ENDLINE;
    cout << "[ This program takes words from a file and permutes them into a  ]" << ENDLINE;
    cout << "[ dictionary that can be used in brute force attacks.            ]" << ENDLINE;
    cout << "[ Intended only for educational purposes, do not use it for evil ]" << ENDLINE;
    cout << "[ By using this software you agree to release the author from    ]" << ENDLINE;
    cout << "[ any liability and responsibility.                              ]" << ENDLINE;
    cout << ENDLINE;
}

void permuteCases(string line, ofstream file) {

}

int main() {
    // Read file with most common words
    // showIntro();

    std::string sourceString = "Äbc";
  std::string destinationString;

  // Allocate the destination space
  destinationString.resize(sourceString.size());

  // Convert the source string to lower case
  // storing the result in destination string
  std::transform(sourceString.begin(),
                 sourceString.end(),
                 destinationString.begin(),
                 ::tolower);

  // Output the result of the conversion
  std::cout << sourceString
            << " -> "
            << destinationString
            << std::endl;
    return 1;
    /*cout << "1. Path to a file with common words to permute: ";
    string path;
    getline(cin, path);
    // Todo make sure it exists

    // Read the file
    ifstream hFile(path);

    if (hFile.is_open()) {
        string line;
        ofstream myfile;
        myfile.open("dict.txt", ios::out);
        while (hFile.good()) {
            getline(hFile, line);
            permuteCases(line, myfile);
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
    myfile.close();
    return 0;*/
}