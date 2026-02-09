#pragma once

class RegularVideo: public Video {
    public:
        RegularVideo(const std::string& des): Video(des) {}
        virtual std::string type() override { return "Regular Video; ";}
        virtual std::string getDescription() override { return description; }
};


