#include <iostream>
#include <regex>
#include <set>

int main() {
    int n;
    
    while (n--)
    {

    }
    std::string input = "john@example.com, jane@example.com, john@example.com, alice@example.com";
    

    std::regex emailRegex(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b)");
    std::set<std::string> uniqueEmails;

    std::sregex_iterator emailIterator(input.begin(), input.end(), emailRegex);
    std::sregex_iterator endIterator;

    while (emailIterator != endIterator) {
        std::smatch match = *emailIterator;
        uniqueEmails.insert(match.str());
        ++emailIterator;
    }

    for (const std::string& email : uniqueEmails) {
        std::cout << email << std::endl;
    }

    return 0;
}