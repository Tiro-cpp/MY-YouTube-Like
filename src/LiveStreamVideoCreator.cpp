#include <iostream>
#include "LiveStreamCreator.hpp"
#include "LiveStreamVideo.hpp"
#include <memory>


std::unique_ptr<Video> LiveStreamVideoCreator::createVideo(const std::string& des) {
    return std::make_unique<LiveStreamVideo>(des);
} 