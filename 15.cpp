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
    vector<pi> prog;
    pi p;
    string s;
    int op, arg;
    FOR (i, 621) {
        cin >> s;
        if (s.compare("acc") == 0)
            op = 0;
        else if (s.compare("jmp") == 0)
            op = 1;
        else
            op = 2;

        cin >> s;
        arg = stoi(s);
        p = MP(op, arg);
        prog.PB(p);
    }

    int acc = 0;
    unordered_set<int> hash;
    FOR (i, (int)prog.size()) {
        if (hash.count(i) > 0) {
            cout << acc << "\n";
            break;
        }
        hash.insert(i);
        if (prog[i].F == 0) {
            acc += prog[i].S;
        } else if (prog[i].F == 1) {
            i += prog[i].S-1;
        }
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
