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

void hi() {
    ull start,n=999999999999,ans;
    string line,s;
    cin >> start >> line;
    for (char c : line) {
        if (c == ',') {
            if (s == "")
                continue;
            if (n > stoi(s)-(start%stoi(s))) {
                n = stoi(s)-(start%stoi(s));
                ans = n*stoi(s);
            }
            s = "";
        }
        else if (c == 'x')
            continue;
        else
            s += c;
    }
    if (s != "") {
        n = min(n, stoi(s)-(start%stoi(s)));
    }
    cout << ans << "\n";
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
