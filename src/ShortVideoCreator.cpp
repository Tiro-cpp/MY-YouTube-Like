#include <iostream>
#include <memory>
#include "ShortVideo.hpp"
#include "Video.hpp"
#include "ShortVideoCreator.hpp"

std::unique_ptr<Video> ShortVideoCreator::createVideo(const std::string& description) {
   return std::make_unique<ShortVideo>(description);
} 