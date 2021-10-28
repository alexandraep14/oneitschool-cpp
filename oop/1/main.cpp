#include <iostream>

using namespace std;

// date structurate
struct YoutubeVideo {
    // field, or member variable
    string uniqueUrl; // e.g. https://www.youtube.com/watch?v=w-0IWyAeZ3M
    int durationSeconds; // seconds
};

// see sample_&reference_parameters.cpp for details about TODO &
void input(YoutubeVideo &video) {
    /*
It's preferred to cout messages about what you read
     */
    cout << "Please type in the video!";
    cout << "Video url: ";
    cin >> video.uniqueUrl;
    cout << "Video duration (seconds): ";
    cin >> video.durationSeconds;
}

void print(YoutubeVideo video) {
    cout << video.uniqueUrl << endl;
    cout << video.durationSeconds << endl;
}

//int main() {
//    YoutubeVideo workbenchVideo; // int a;
//    workbenchVideo = YoutubeVideo{"https://www.youtube.com/watch?v=w-0IWyAeZ3M", 1276};
//
////    // TODO how do we access and update the fields
////    print(workbenchVideo);
////
////    workbenchVideo.durationSeconds += 3;
////    print(workbenchVideo);
////
////    // remove https:// from the url
////    workbenchVideo.uniqueUrl.erase(0, 8);
////    print(workbenchVideo);
//
//    // TODO it's recommended to use functions for output and input
//    YoutubeVideo v;
//    input(v);
//    print(v);
//
//    return 0;
//}