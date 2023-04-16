#include <iostream>
#include <string>
#include <list>

class YouTubeChannel{
    public:
        std::string Name;
        std::string OwnerName; 
        int SubscriberCount; 
        std::list<std::string> PublishedVideoTitles;

    YouTubeChannel(std::string name, std::string ownername){
        Name = name; 
        OwnerName = ownername; 
        SubscriberCount = 0;
    }

    void GetInfo(){
        std::cout << "Name :"<< Name << std::endl;
        std::cout << "OwnerName :" << OwnerName << std::endl;
        for (std::string videoTitle : PublishedVideoTitles){
            std::cout << "VideoTitle :" << videoTitle << std::endl;
        }
    }

};

int main(){
    YouTubeChannel ytChannel("Code CPP", "ramma"); 
    ytChannel.PublishedVideoTitles.push_back("C++");
    ytChannel.PublishedVideoTitles.push_back("Python");

    ytChannel.GetInfo();

}