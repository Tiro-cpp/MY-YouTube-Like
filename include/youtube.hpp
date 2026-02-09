#pragma once
#include <vector>
#include <memory>
#include "Chanel.hpp"
#include "ChanelCreator.hpp"

class youtube {
    public:
        youtube(const youtube&) = delete;
        youtube& operator=(const youtube&) = delete;
    private:
        youtube() {}

    private:    
        std::vector<std::shared_ptr<Chanel>> channel;

    public: 

        static youtube& CreateYouTube() {
            static youtube youTube;  
            return youTube;
        }

        std::shared_ptr<Chanel>  getChanel(const std::string& name) const;
        void createChanel(ChanelCreator& ch, const std::string& name );
};