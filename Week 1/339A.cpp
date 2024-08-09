#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string sum;
    cin >> sum;

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (char c : sum){
        if (c=='1') count1++;
        else if (c == '2') count2++;
        else if(c=='3') count3++;   
    }


    string ordered_sum = "";
    for (int i = 0; i<count1 ;i++) ordered_sum+="1+";
    for (int i = 0; i<count2 ;i++) ordered_sum+="2+";
    for (int i = 0; i<count3 ;i++) ordered_sum+="3+";

    ordered_sum.pop_back();

    cout << ordered_sum << endl;
}