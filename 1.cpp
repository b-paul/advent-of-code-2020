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
	vi V;
	
	int i,n;
	FOR(i,200) {
		cin >> n;
		V.PB(n);
	}

	FOR(i,200){
		FOR(n,200){
			if (V[i]+V[n]==2020) {
				cout << V[i]*V[n] << "\n";
				break;
			}
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
