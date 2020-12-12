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
    double x=0,y=0;
    int r=0;
    string s;
    int n=0;
    FOR(i, 773) {
        cin >> s;
        n = stoi(s.substr(1,s.size()-1));
        if (s[0] == 'N')
            y += n;
        if (s[0] == 'S')
            y -= n;
        if (s[0] == 'E')
            x += n;
        if (s[0] == 'W')
            x -= n;
        if (s[0] == 'L')
            r = (r+n)%360;
        if (s[0] == 'R')
            r = (r-n)%360;
        if (s[0] == 'F') {
            x += cos(r*M_PI/180.0) * n;
            y += sin(r*M_PI/180.0) * n;
        }
    }
    cout << abs(x) + abs(y) << "\n";
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
