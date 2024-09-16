#include "main.hpp"

#include <iostream>
#include <string>
#include <string_view>

// Temporary hardcoded master password 
const std::string PasswordManager::m_master = "test_pass";

bool PasswordManager::queryAccess(std::string_view master) const{
    return m_master == master;
}

int main(){
    std::cout << "Enter master password: ";

    std::string password;
    std::cin >> password;

    PasswordManager pm;
    
    if (pm.queryAccess(password)){
        std::cout << "Access granted" << '\n';
    } else {
        std::cout << "Access denied" << '\n';
    }
}