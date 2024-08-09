#include <iostream>
#include <vector>
using namespace std;

int count_good_sequences(int n, int k) {
    vector<vector<int>> matrix(k + 1, vector<int>(n+1, 0));
    
    for (int j=1;j<=n;j++) {
        matrix[1][j] = 1;
    }
    
    for (int i = 2; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int m = j; m <= n; m += j) {
                matrix[i][m] = (matrix[i][m] + matrix[i-1][j]) % 1000000007;
            }
        }
    }
    
    int result = 0;
    for (int j=1;j<=n; j++) {
        result = (result + matrix[k][j]) % 1000000007;
    }
    
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << count_good_sequences(n, k);
    return 0;
}
