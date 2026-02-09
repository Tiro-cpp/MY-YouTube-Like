#pragma once
#include <string>

class Observer {
    public:
        virtual ~Observer() = default;
        virtual void Notify(const std::string& def) = 0;
};

class User: public Observer {
    private:
        std::string Name;
    public: 
        User(std::string n) : Name(std::move(n)) {}
        virtual void Notify(const std::string& def) override;
};