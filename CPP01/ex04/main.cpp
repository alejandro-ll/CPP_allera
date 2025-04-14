#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 (string to replace) cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << inFile.rdbuf();
    std::string content = buffer.str();
    inFile.close();

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return 1;
    }

    outFile << content;
    outFile.close();

    return 0;
}
