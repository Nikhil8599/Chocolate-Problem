#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> multiply(const vector<vector<ll>> &A, const vector<vector<ll>> &B) {
    vector<vector<ll>> result(3, vector<ll>(3, 0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}
vector<vector<ll>> matrixPower(vector<vector<ll>> base, long long exp) {
    vector<vector<ll>> identity = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    while (exp > 0) {
        if (exp & 1)
            identity = multiply(identity, base);

        base = multiply(base, base);
        exp >>= 1;
    }
    return identity;
}
ll countWays(ll n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;
    vector<vector<ll>> T = {
        {1, 1, 2},
        {1, 0, 0},
        {0, 1, 0}
    };
    vector<vector<ll>> res = matrixPower(T, n - 2);
    return res[0][0] * 2 + res[0][1] * 1 + res[0][2] * 1;
}
int main() {
    long long n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Number of ways: " << countWays(n) << endl;
    return 0;
}