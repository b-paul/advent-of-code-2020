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
    int n,m=0;
    vi v;
    FOR(i, 101) {
        cin >> n;
        v.PB(n);
        m = max(m,n);
    }

    n=0;

    unordered_set<int> hash;
    vector<ull> dp(m+1, 0);

    dp[m] = 1;

    int next;

    while (1) {
        next = 0;
        FOR(i, (int)v.size()) {
            if (v[i] >= m)
                continue;
            next = max(next, v[i]);
        }
        m = next;

        dp[next] = 0;

        FOR(i, (int)v.size()) {
            if (v[i]-1 == next)
                dp[next] += dp[v[i]];
            if (v[i]-2 == next)
                dp[next] += dp[v[i]];
            if (v[i]-3 == next)
                dp[next] += dp[v[i]];
        }

        if (next == 1)
            break;
    }
    next = 0;
    FOR(i, (int)v.size()) {
        if (v[i]-1 == next)
            dp[next] += dp[v[i]];
        if (v[i]-2 == next)
            dp[next] += dp[v[i]];
        if (v[i]-3 == next)
            dp[next] += dp[v[i]];
    }
    cout << dp[0] << "\n";
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
