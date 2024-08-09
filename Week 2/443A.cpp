#include <iostream>
#include <set>
#include <string>

using namespace std;

int getDistinctLetters(string s){

    if(s.size() < 2){
        return 0;
    }

    string sWithoutBraces = s.substr(1,s.size()-2);
    set<char> distinctLetters;

    for (char i : sWithoutBraces){
        if (i == ',' || i == ' '){
            continue;
        }
        distinctLetters.insert(i);
    }
    return distinctLetters.size();
}
int main(){
    string s;
    getline(cin ,s );
    int distinctLetters = getDistinctLetters(s);
    cout << distinctLetters; 
    return 0;
}