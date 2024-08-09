#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> pieces(m);
    for (int i = 0; i < m; ++i) {
        cin >> pieces[i];
    }
    sort(pieces.begin(),pieces.end());

    int minDiff = pieces[n-1] - pieces[0];
    for (int i =0; i<=m-n; i++){
        minDiff = min(pieces[i+n-1]-pieces[i] , minDiff);
    }
    
    cout << minDiff << endl;

    return 0;
}
