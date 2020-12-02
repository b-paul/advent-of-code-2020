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
    int i,j,min,max,n,r=0;
    string minmax, mins, maxs, ch, passwd;
    FOR(i,1000) {
        cin >> minmax >> ch >> passwd;
        mins = "";
        maxs = "";

        j=0;
        while(minmax[j] != '-') {
            mins+=minmax[j];
            j++;
        }
        j++;
        while(minmax[j]) {
            maxs+=minmax[j];
            j++;
        }

        min = stoi(mins);
        max = stoi(maxs);

        n=0;

        for (char c : passwd) {
            if (c == ch[0])
                n++;
        }

        r += n >= min && n <= max;
    }

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
