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

int i,j,k,l;

void hi() {
    string s;
    vector<vi> v, last;
    while (1) {
        getline(cin, s);
        if (s == "")
            break;
        vi n;
        for (char c : s) {
            if (c == '.')
                n.PB(0);
            else if (c == 'L')
                n.PB(1);
        }
        v.PB(n);
    }
    last = v;
    while (1) {
        /*
        // Printing the layout!
        FOR(i, (int)v.size()) {
            FOR(j, (int)v[i].size()) {
                if (v[i][j] == 0)
                    cout << ".";
                if (v[i][j] == 1)
                    cout << "L";
                if (v[i][j] == 2)
                    cout << "#";
            }
            cout << "\n";
        }
        cout << "\n\n";
        */
        FOR(i, (int)v.size())
        FOR(j, (int)v[i].size()) {
            if (last[i][j] == 1) {
                for(k = -1; k <= 1; k++)
                for(l = -1; l <= 1; l++) {
                    if (k==0 && l==0)
                        continue;

                    int x=i,y=j;

                    while (1) {
                       x += k;
                       y += l;
                       if (x < 0)
                           goto brk3;
                       if (x > (int)v.size()-1)
                           goto brk3;
                       if (y < 0)
                           goto brk3;
                       if (y > (int)v[x].size()-1)
                           goto brk3;

                       if (last[x][y] == 0)
                           continue;
                       if (last[x][y] == 2)
                           goto brk1;
                       break;
                    }
brk3:
                    v[i][j] = v[i][j];
                }
                v[i][j] = 2;
brk1:
                v[i][j] = v[i][j];
            } else if (last[i][j] == 2) {
                int cnt = 0;
                for(k = -1; k <= 1; k++)
                for(l = -1; l <= 1; l++) {
                    if (k==0 && l==0)
                        continue;

                    int x=i,y=j;

                    while (1) {
                       x += k;
                       y += l;
                       if (x < 0)
                           goto brk4;
                       if (x > (int)v.size()-1)
                           goto brk4;
                       if (y < 0)
                           goto brk4;
                       if (y > (int)v[x].size()-1)
                           goto brk4;

                       if (last[x][y] == 0)
                           continue;
                       if (last[x][y] == 2)
                           cnt++;
                       break;
                    }
brk4:
                    v[i][j] = v[i][j];
                }
                if (cnt >= 5)
                    v[i][j] = 1;
            }
        }
        FOR(i, (int)v.size())
        FOR(j, (int)v[i].size()) {
            if (last[i][j] != v[i][j])
                goto brk2;
        }
        break;
brk2:
        last = v;
    }

    int n = 0;
    FOR(i, (int)v.size())
    FOR(j, (int)v[i].size()) {
        if (v[i][j] == 2)
            n++;
    }
    cout << n << "\n";
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
