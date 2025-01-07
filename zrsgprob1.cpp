#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout << 2 * min(n, m) << "\n";
    }

    return 0;
}

