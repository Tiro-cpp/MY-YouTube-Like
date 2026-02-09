#include <iostream>
#include <memory>

#include "youtube.hpp"
#include "Chanel.hpp"
#include "ChanelCreator.hpp"

#include "User.hpp"

#include "RegularVideoCreator.hpp"
#include "ShortVideoCreator.hpp"
#include "LiveStreamCreator.hpp"

int main() {
    std::cout << "===== YouTube-Like System Demo =====\n\n";

    // --------------------------------------------------
    // Get singleton YouTube instance
    // --------------------------------------------------
    youtube& yt = youtube::CreateYouTube();

    // --------------------------------------------------
    // Create Channel via ChannelCreator
    // --------------------------------------------------
    ChanelCreator chCreator;
    yt.createChanel(chCreator, "CPP_ARMENIA");

    // --------------------------------------------------
    // Get Channel
    // --------------------------------------------------
    auto channel = yt.getChanel("CPP_ARMENIA");
    if (!channel) {
        std::cout << "Channel not found!\n";
        return 0;
    }

    std::cout << "Channel created: " << channel->GetName() << "\n\n";

    // --------------------------------------------------
    // Create Users (Observers)
    // --------------------------------------------------
    auto user1 = std::make_shared<User>("Tiran");
    auto user2 = std::make_shared<User>("Anna");
    auto user3 = std::make_shared<User>("Arman");

    // --------------------------------------------------
    // Subscribe Users
    // --------------------------------------------------
    channel->AddSubscriber(user1);
    channel->AddSubscriber(user2);
    channel->AddSubscriber(user3);

    std::cout << "\n--- Users subscribed ---\n\n";

    // --------------------------------------------------
    // Video Creators (Factory Method)
    // --------------------------------------------------
    RegularVideoCreator regularCreator;
    ShortVideoCreator shortCreator;
    LiveStreamVideoCreator liveCreator;

    // --------------------------------------------------
    // Upload Videos (this should notify all users)
    // --------------------------------------------------
    channel->AddVideo(regularCreator, "C++ Design Patterns Explained");
    channel->AddVideo(shortCreator, "unique_ptr vs shared_ptr in 60 seconds");
    channel->AddVideo(liveCreator, "Live Stream: Modern C++ Q&A");

    // --------------------------------------------------
    // Show uploaded videos
    // --------------------------------------------------
    std::cout << "\n--- Uploaded Videos ---\n";
    channel->getVideos();

    std::cout << "\n===== Demo Finished Successfully =====\n";
    return 0;
}
