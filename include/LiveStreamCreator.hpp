#pragma once
#include "VideoCreator.hpp"
#include <memory>
#include "Video.hpp"

class LiveStreamVideoCreator: public VideoCreator {
    public:
        virtual std::unique_ptr<Video> createVideo(const std::string& des) override ;
};