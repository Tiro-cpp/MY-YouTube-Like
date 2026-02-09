#pragma once
#include "Video.hpp"
#include <string>

class ShortVideo: public Video {
    public:
        ShortVideo(const std::string& des): Video(des) {}
        virtual std::string type() override { return "Short Video; "; }
        virtual std::string getDescription() override { return description; }
};