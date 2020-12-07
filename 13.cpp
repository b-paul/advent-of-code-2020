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

pair<string,vector<string>> rules[594];
unordered_set<string> bags;
int n = 0;

void run(string s) {
	for (auto r : rules) {
		for (string st : r.S) {
			if (s.compare(st) == 0 && bags.count(r.F) == 0) {
				n++;
				bags.insert(r.F);
				run(r.F);
			}
		}
	}
}

void hi() {
	string line,f,a;
	vector<string> v;
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
				// clear line
				getline(cin, line);
				break;
			}

			if (line.compare("bags.") == 0)
				break;
			
			if (line.compare("bag.") == 0)
				break;

			if (line.compare("bags,") == 0) {
				v.PB(f);
				f = "";
				continue;
			}
			
			if (line.compare("bag,") == 0) {
				v.PB(f);
				f = "";
				continue;
			}

			if (line.length() == 1)
				continue;

			f += line;

		}

		v.PB(f);
		f = "";
		rules[i] = MP(a,v);
	}
	run("shinygold");
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
