#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int numLines;
    std::cout << "Enter the number of lines: ";
    std::cin >> numLines;
    std::cin.ignore(); // Ignore the newline character after reading the number of lines

    std::unordered_set<std::string> uniqueEmails;

    for (int i = 0; i < numLines; i++) {
        std::string line;
        std::cout << "Enter line " << i + 1 << ": ";
        std::getline(std::cin, line);

        // Find email IDs in the line and add them to the set
        std::size_t pos = line.find('@');
        while (pos != std::string::npos) {
            std::size_t startPos = line.rfind(' ', pos);
            std::size_t endPos = line.find(' ', pos);
            if (startPos == std::string::npos) {
                startPos = 0;
            } else {
                startPos++;
            }
            if (endPos == std::string::npos) {
                endPos = line.length();
            }
            std::string email = line.substr(startPos, endPos - startPos);
            uniqueEmails.insert(email);
            pos = line.find('@', pos + 1);
        }
    }

    std::cout << "Unique email IDs:" << std::endl;
    for (const std::string& email : uniqueEmails) {
        std::cout << email << std::endl;
    }

    return 0;
}