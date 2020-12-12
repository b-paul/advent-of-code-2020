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
    double x=0,y=0,wx=10,wy=1;
    string s;
    int n=0;
    FOR(i, 773) {
        cin >> s;
        n = stoi(s.substr(1,s.size()-1));
        if (s[0] == 'N')
            wy += n;
        if (s[0] == 'S')
            wy -= n;
        if (s[0] == 'E')
            wx += n;
        if (s[0] == 'W')
            wx -= n;

        // (a+bi)(sin(theta)i+cos(theta)) rotate
        // asin(theta)i+acos(theta)-bsin(theta)+bcos(theta)i
        if (s[0] == 'L') {
            double theta = n*M_PI/180.0;
            double oldwx = wx;
            wx = (wx*cos(theta)-wy*sin(theta));
            wy = (oldwx*sin(theta)+wy*cos(theta));
        }
        if (s[0] == 'R') {
            double theta = -n*M_PI/180.0;
            double oldwx = wx;
            wx = (wx*cos(theta)-wy*sin(theta));
            wy = (oldwx*sin(theta)+wy*cos(theta));
        }

        if (s[0] == 'F') {
            x += wx*n;
            y += wy*n;
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
