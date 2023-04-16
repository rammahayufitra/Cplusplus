#include <iostream>
#include <string>
#include <list>

class YouTubeChannel{
    public:
        std::string Name;
        std::string OwnerName; 
        int SubscriberCount; 
        std::list<std::string> PublishedVideoTitles;
};


int main(){
    YouTubeChannel ytChannel; 
    ytChannel.Name = "C++.channel";
    ytChannel.OwnerName = "Mr.Low Lever"; 
    ytChannel.SubscriberCount = 1800; 
    ytChannel.PublishedVideoTitles = {"part a", "part b", "part c"}; 

    std::cout << "Name : " << ytChannel.Name << std::endl;
    std::cout << "OwnerName : " << ytChannel.OwnerName << std::endl;
    std::cout << "SubscriberCount : " << ytChannel.SubscriberCount << std::endl; 
    for (std::string videoTitle: ytChannel.PublishedVideoTitles){
        std::cout << videoTitle << std::endl;
    }
    return 0;
}