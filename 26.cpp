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
    ull start,t,idx=-1;
    string line,s;
    vector<pi> v;
    cin >> start >> line;
    for (char c : line) {
        if (c == ',') {
            idx++;
            if (s == "")
                continue;
            v.PB(MP(stoi(s),idx));
            s = "";
        }
        else if (c == 'x')
            continue;
        else
            s += c;
    }
    if (s != "") {
        idx++;
        v.PB(MP(stoi(s),idx));
    }

    t = 0;
    ull r = v[0].F;
    for (int i = 1; i < (int)v.size(); i++) {
        while (1) {
            if ((t+v[i].S) % v[i].F == 0) {
                r *= v[i].F;
                break;
            }
            t += r;
        }
    }

    cout << t << "\n";
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
