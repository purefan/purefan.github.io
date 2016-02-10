#include <string>
#include <vector>
class Permuter {
public:
    std::string currentWord;
    std::string sourceFile;
    std::string targetFile;

    // This constructor sets the path to the file with common words
    Permuter();

    // Runs a few checks before doing the magic
    bool allGood();
    void setSourceFile(std::string);
    void setTargetFile(std::string);
    std::vector<std::string> getPermutations(std::string);
    std::vector<std::string> mixCases(std::string);
    void run();

private:
    std::vector<std::string> sourceWords;
    void uniqueVector(std::vector<std::string>&);
    bool fileExists(std::string);
    std::vector<std::string> mixOfLowerCases(std::string);
    bool canWriteToFile(std::string);
    void setWord(std::string);
    int countLinesInFile(std::string);
    std::vector<std::string> fileToVector(std::string);
};