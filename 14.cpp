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

pair<string,vector<pair<int,string>>> rules[594];
unordered_set<string> bags;

int run(string s) {
	int n = 0;
	for (auto r : rules) {
		if (r.F == s) {
			for (auto p : r.S) {
				n += p.F * (1+run(p.S));
			}
		}
	}
	return n;
}

void hi() {
	string line,f,a;
	vector<pair<int,string>> v;
	int l = 0;
	FOR (i, 594) {
		cin >> line;
		f = line;
		cin >> line;
		f += line;
		a = f;
		cin >> line >> line;
		f = "";
		v.clear();
		while (1) {
			cin >> line;

			if (line.compare("no") == 0) {
				l = 0;
				// clear line
				getline(cin, line);
				break;
			}

			if (line.compare("bags.") == 0)
				break;
			
			if (line.compare("bag.") == 0)
				break;

			if (line.compare("bags,") == 0) {
				v.PB(MP(l,f));
				f = "";
				continue;
			}
			
			if (line.compare("bag,") == 0) {
				v.PB(MP(l,f));
				f = "";
				continue;
			}

			if (line.length() == 1) {
				l = stoi(line);
				continue;
			}

			f += line;

		}

		v.PB(MP(l,f));
		f = "";
		rules[i] = MP(a,v);
	}
	cout << run("shinygold") << "\n";
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
