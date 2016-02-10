#include "permuter.h"
#include <sys/stat.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <iostream>

#define ENDL "\n"

Permuter::Permuter() {}

bool Permuter::allGood() {
    return
        this->fileExists(this->sourceFile) &&
        this->canWriteToFile(this->targetFile);
}

/**
 * @brief Checks if a file exists
 * @details Does not check if the file is readable
 * @param sourceFile std::string
 * @return bool true if the file exists
 */
bool Permuter::fileExists(std::string sourceFile) {
    struct stat buffer;
    if (stat (sourceFile.c_str(), &buffer) == 0) {
        std::cout << "fileExists(" << sourceFile << ") -> true" << ENDL;
        return true;
    }
    return false;
}


bool Permuter::canWriteToFile(std::string targetFile) {
    FILE * pFile;
    const char* param = targetFile.c_str();
    pFile = fopen(param, "w");
    return pFile != NULL;
}

void Permuter::setWord(std::string word) {}

/**
 * @brief Counts lines in a file
 * @details [long description]
 *
 * @param pathToFile The path to the file to count lines from
 * @return int The number of lines in a file
 */
int Permuter::countLinesInFile(std::string pathToFile) {
    std::ifstream sFile(pathToFile);
    std::string line;
    int total = 0;
    for (; std::getline(sFile, line); ++total);
    return total;
}

void Permuter::setSourceFile(std::string sourceFile) { this->sourceFile = sourceFile; }
void Permuter::setTargetFile(std::string targetFile) { this->targetFile = targetFile; }

std::vector<std::string> Permuter::fileToVector(std::string sourceFile) {
    std::vector<std::string> originalWords;

    std::ifstream hFile(sourceFile);
    if (hFile.is_open()) {
        std::string line;
        while (hFile.good()) {
            getline(hFile, line);
            originalWords.push_back(line);
        }
    }
    return originalWords;
}

bool Permuter::hasLowerCase(std::string toCheck) {
    return std::any_of(toCheck.begin(), toCheck.end(), ::islower);
}
/**
 * @details Takes the original word and returns a vector of all combinations with different cases
 *
 * @param original string of the original word to permute
 * @return [Chess, CHESS, chess, CHess, CHEss, CHESs, CHESS, cHess, cHEss, cHESs,...]
 */
std::vector<std::string> Permuter::mixCases(std::string original) {
    std::vector<std::string> mixedCases;
    // start with an upper case word
    std::string upper = boost::to_upper_copy<std::string>(original);

    mixedCases.push_back(upper);
    mixedCases.push_back(original);
    mixedCases.push_back(boost::to_lower_copy<std::string>(original));

    // There shouldn't be any duplicates but lets make sure
    this->uniqueVector(mixedCases);
    return mixedCases;
}

/**
 * @brief Returns every combination of upper and lower case
 * @details [long description]
 *
 * @param original [description]
 * @return [Chess, CHess, cHess, cHEss,...]
 */
std::vector<std::string> Permuter::mixOfLowerCases(std::string original) {
    std::vector<std::string> lowerCases;
    std::cout << "mixOfLowerCases(" << original << ");";
    // int boundChecker = 0;
    //por cada posicion
    //    convierta esa posicion a mayuscula --> Chess, cHess, chEss

    std::string temp = original;
    // for (std::string::iterator ite = original.begin(); ite < original.end(); ite++) {
    for(std::string::size_type i = 0; i < original.size(); ++i) {
        // do_things_with(str[i]);
        // std::cout << boost::algorithm::to_lower(*ite) << ENDL;
        std::cout << "Testing original[" << i << "] = " << original[i] << ENDL;
    }

    /*while(this->hasLowerCase(original) && boundChecker < 10) {
        boundChecker++;
        //original = original.
    }*/
    return lowerCases;
}
void Permuter::uniqueVector(std::vector<std::string> &originalVector) {
    sort( originalVector.begin(), originalVector.end() );
    originalVector.erase( unique( originalVector.begin(), originalVector.end() ), originalVector.end() );
}
std::vector<std::string> Permuter::getPermutations(std::string original) {
    std::vector<std::string> permutations;
    std::vector<std::string> mixedCases = this->mixCases(original);
    return permutations;
}

void Permuter::run() {
    if (this->fileExists(this->sourceFile) == true) {
        std::cout << this->sourceFile << " <--> " << this->targetFile << ENDL;
        this->sourceWords = this->fileToVector(this->sourceFile);
        std::cout << "Total words to permute: " << this->sourceWords.size() << ENDL;
        for (std::vector<std::string>::iterator ite = this->sourceWords.begin(); ite != this->sourceWords.end(); ite++ ) {
            std::vector<std::string> permutations = this->getPermutations(*ite);
        }
    } else {
        std::cout << "Not everything is ok" << ENDL;
    }

}