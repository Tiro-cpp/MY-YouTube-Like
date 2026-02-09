#include <iostream>
#include "Chanel.hpp"

void Chanel::NotifyAll(const std::string& des)  {
    for(size_t i{}; i < subscribers.size(); ) {
        if(auto sub = subscribers[i].lock()) {
            sub->Notify(des);
            ++i;
        }else {
            subscribers.erase(subscribers.begin() + i);
        
        }
    }
}
    
void Chanel::getVideos() const {
    for(size_t i{0}; i < videos.size(); ++i ) {
        videos[i]->type();
        videos[i]->getDescription();
    }

}

void Chanel::AddVideo(VideoCreator& creator, const std::string& des ) {
    auto vid = creator.createVideo(des);
    videos.push_back(std::move(vid));   
    NotifyAll(des);

}

void Chanel::AddSubscriber(std::weak_ptr<User> user) {
    subscribers.push_back(user);
}

std::string Chanel::GetName() const { return Name; }
