#include <iostream>
#include <string>

// Основная функция, которая приветствует пользователя!
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;  // Program finished successfully
}
