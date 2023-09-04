#include <iostream>
#include <string>

void checkPassword() {
    std::string password;
    
    std::cout << "Enter the password: ";
    std::cin >> password;
    
    if (password == "secret"||password=="OOP") {
        std::cout << "Access granted! You entered the correct password." << std::endl;
    } else {
        std::cout << "Access denied! Incorrect password." << std::endl;
    }
}

int main() {
    checkPassword();
    
    return 0;
}
