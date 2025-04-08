#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "npnc" << endl;
        }
        else if (n == 2) {
            cout << "smallest prime number" << endl;
        }
        else if (isPrime(n)) {
            cout << "prime number" << endl;
        }
        else {
            cout << "not a prime number" << endl;
        }
    }
    return 0;
}