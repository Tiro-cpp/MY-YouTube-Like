#include <iostream>
#include "RegularVideoCreator.hpp"
#include "RegularVideo.hpp"
#include <string>
#include <memory>


std::unique_ptr<Video> RegularVideoCreator::createVideo(const std::string& des) {
    return std::make_unique<RegularVideo>(des);
}
