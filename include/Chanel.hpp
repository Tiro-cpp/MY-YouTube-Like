#pragma once 
#include <string>
#include <vector>
#include "Video.hpp"
#include "VideoCreator.hpp"
#include <memory>
#include "User.hpp"

class Chanel {
    protected:
        std::string Name;
        std::vector<std::unique_ptr<Video>> videos;
        std::vector<std::weak_ptr<User>> subscribers;
       

    public:
        Chanel(const std::string& n): Name{ std::move(n) } {}
        ~Chanel() = default;

        void NotifyAll(const std::string& des);
        void getVideos() const;
        std::string GetName() const;

        void AddVideo(VideoCreator& creator, const std::string& des);
        void AddSubscriber(std::weak_ptr<User> user);
};