#include <iostream>
#include <string>

// Main function that greets user
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;  // Program finished successfully
}
