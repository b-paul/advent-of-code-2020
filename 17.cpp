#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int,int> pi;

#define FOR(i,a) for (i = 0; i < (a); i++)

#define SQ(a) (a)*(a)

#define F first
#define S second
#define PB push_back
#define MP make_pair

// Real modulo that fixes negatives
#define MOD(a,b) (((a)%(b))<0?(((a)%(b))+(b)):((a)%(b)))

int i;

void hi() {
    vi v;
    int n,ptr = 0;
    FOR (i, 1000) {
        cin >> n;
        if (i < 25) {
            v.PB(n);
            continue;
        }
        for (int a : v)
            for (int b : v)
                if (a+b == n) {
                    goto yay;
                }
        cout << n << "\n";
        break;
yay:
        v[ptr] = n;
        ptr++;
        ptr %= 25;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    //cin >> t;

    for (int i = 0; i < t; i++)
        hi();

    return 0;
}
