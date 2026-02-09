#pragma once
#include <memory>
#include "VideoCreator.hpp"
#include <string>

class RegularVideoCreator: public VideoCreator {
    public:
        virtual std::unique_ptr<Video> createVideo(const std::string& des) override ;
};