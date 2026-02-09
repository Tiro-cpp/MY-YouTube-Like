#pragma once
#include "VideoCreator.hpp"
#include <memory>
#include <string>
#include "Video.hpp"

class ShortVideoCreator: public VideoCreator {
    public:
        virtual std::unique_ptr<Video> createVideo(const std::string& description) override ;
};