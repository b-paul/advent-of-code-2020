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

    int a=0,c=1;n=0;

    unordered_set<int> hash;

    while (1) {
        FOR(i, (int)v.size()) {
            if (hash.count(i) > 0)
                continue;
            if (v[i]-1 == n) {
                a++;
                n = v[i];
                hash.insert(i);
                goto cont;
            }
        }
        FOR(i, (int)v.size()) {
            if (hash.count(i) > 0)
                continue;
            if (v[i]-3 == n) {
                c++;
                n = v[i];
                hash.insert(i);
                goto cont;
            }
        }
cont:
        if (n == m)
            break;
    }
    cout << a*c << "\n";
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
