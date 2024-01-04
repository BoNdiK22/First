#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string text;
    std::cout << "Vvedite ctroky teksta: ";
    std::getline(std::cin, text);

    std::istringstream iss(text);
    std::string word;
    int count = 0;
    
    while (iss >> word) {
        std::cout << word << ",";
        count++;
    }
    
    std::cout << "\nKolichectvo clov: " << count << std::endl;
    
    return 0;
}