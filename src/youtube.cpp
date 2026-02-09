#include <iostream>
#include "youtube.hpp"
#include <memory>




std::shared_ptr<Chanel> youtube::getChanel(const std::string& name) const{
    for(size_t i{}; i < channel.size(); ++i){
        if(channel[i]->GetName() == name){
            return channel[i];
        }
    } 
    return nullptr;
}

void youtube::createChanel(ChanelCreator& ch, const std::string& name ) {
    auto chanel = ch.createChanel(name);
    channel.push_back(std::move(chanel));

}
