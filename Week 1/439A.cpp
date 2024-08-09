#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
    
    
int main(){
    int n ,d; //n-> total songs ; d-> total duration;
    cin >> n >> d;
    
    vector<int> durations(n);
    for (int i = 0; i < n; i++) {
        cin >> durations[i];
    }
    
    int totalSong = 0;
        for (int i = 0; i < n; i++) {
            totalSong += durations[i];
        }
        
    if(((n-1)*10 + totalSong)>d) {
        cout << "-1";
    } else {
        
        int jokes = floor((d - totalSong) / 5);
        cout << jokes;
    }
}