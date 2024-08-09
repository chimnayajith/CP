#include <iostream>
#include <vector>
#include <cmath>
    
using namespace std;
    
int minimumCharge(vector<int> data){
    double n = static_cast<double>(data[0]);
    double m = static_cast<double>(data[1]);
    double a = static_cast<double>(data[2]);
    double b = static_cast<double>(data[3]);

    if(n < m && b < n*a){
        return b;
    }
    int minCost = min(
        min(
            static_cast<int>(floor(n/m)*b + ceil(fmod(n,m)) * a),
            static_cast<int>(floor(n/m)*b + ceil(fmod(n,m) / m) * b)
        ),
        static_cast<int>(n * a)
    );
    return minCost;
}
int main(){
    
    vector<int> data(4);
    for (int i = 0; i < 4; i++) {
        cin >> data[i];
    }
    int minCost = minimumCharge(data);
    cout << minCost;
    return 0;
}