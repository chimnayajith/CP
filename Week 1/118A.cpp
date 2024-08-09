#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c){
    return ( c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y' || 
            c=='a' || c=='e' || c=='i' || c=='o' || c=='u'|| c=='y');
}
int main(){
    string word;
    cin >> word;

    string new_string = "";

    for (char c : word){
        if(!isVowel(c)){
            new_string += '.';
            new_string += tolower(c);
        }
    }

    cout << new_string;
}