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
    string pass;
    int i,j,id=0,c,r,n;
    // min was 80, max was 919
    for (i = 80; i <= 919; i++) {
        // xor out every seat and the one that is left is ours
        id ^= i;
    }
    FOR(i,839) {
        cin >> pass;
        n = 64;
        c=0,r=0;
        FOR(j,7) {
            if (pass[j] == 'B')
                c += n;
            n /=2;
        }
        n = 4;
        FOR(j,3) {
            if (pass[j+7] == 'R')
                r += n;
            n /=2;
        }
        id ^= c*8+r;
    }
    cout << id << "\n";
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
