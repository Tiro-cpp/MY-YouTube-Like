#pragma once
#include <memory>
#include "Video.hpp"

class VideoCreator {
    public:
        virtual ~VideoCreator() = default;
        virtual std::unique_ptr<Video> createVideo(const std::string& description) = 0;
};
