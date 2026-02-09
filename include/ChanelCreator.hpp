#pragma once
#include <memory>
#include "Chanel.hpp"


class ChanelCreator {
    public:
        virtual ~ChanelCreator() = default;
        std::unique_ptr<Chanel> createChanel(const std::string& name);
};
