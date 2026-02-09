#include <iostream>
#include <memory>
#include "Chanel.hpp"
#include "ChanelCreator.hpp"

std::unique_ptr<Chanel> ChanelCreator::createChanel(const std::string& name) {
    return std::make_unique<Chanel>(name);
}
