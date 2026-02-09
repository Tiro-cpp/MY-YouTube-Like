#include <iostream>
#include "User.hpp"

void User::Notify(const std::string& def) {
    std::cout << "I am notified " << def << std::endl;
}