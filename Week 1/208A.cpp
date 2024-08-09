#include <iostream>
using namespace std

int main(){
    string song;
    string originalSong = "";

    cin >> song;

    for (int i = 0 ; i< song.length(); i++){
        if(song.substr(i,i+3) == "WUB"){
            i+=2;
        }
        else {
            originalSong +=song[i];
        }
    }
    
    cout << originalSong;

    return 0;
}