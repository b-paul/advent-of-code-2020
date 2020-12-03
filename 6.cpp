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
    vector<uint32_t> map(323,0);
    // one row is 31 wide, so 32 bits is perfect!

    int i, j, n;
    string l;
    FOR (i, 323) {
        cin >> l;
        n=0;
        FOR(j, 31) {
            if (l[j] == '#')
                n |= 1 << j;
        }
        map[i] = n;
    }

    j=0,n=0;
    ull r;
    FOR (i, 323) {
        if (map[i] & (1 << (j%31)))
            n++;
        j+=1;
    }
    r = n;
    j=0,n=0;
    FOR (i, 323) {
        if (map[i] & (1 << (j%31)))
            n++;
        j+=3;
    }
    r *= n;
    j=0,n=0;
    FOR (i, 323) {
        if (map[i] & (1 << (j%31)))
            n++;
        j+=5;
    }
    r *= n;
    j=0,n=0;
    FOR (i, 323) {
        if (map[i] & (1 << (j%31)))
            n++;
        j+=7;
    }
    r *= n;
    j=0,n=0;
    FOR (i, 323) {
        if (map[i] & (1 << (j%31)))
            n++;
        j+=1;
        i++;
    }
    r *= n;

    cout << r << "\n";
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
