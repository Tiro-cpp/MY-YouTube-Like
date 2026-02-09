#pragma once
#include <string>

class LiveStreamVideo: public Video {
    public: 
        LiveStreamVideo(const std::string& des): Video(des) {}
        virtual std::string type() override { return "Live Stream  Video; "; }
        virtual std::string getDescription() override { return description; }
};        