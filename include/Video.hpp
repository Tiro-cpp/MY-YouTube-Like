#pragma once

class Video {
    protected:
        std::string description;

    public:
        Video(const std::string& des): description{des} {}
        virtual std::string type() = 0;
        virtual std::string getDescription() = 0;
};