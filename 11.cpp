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
    string input, answers;
    int n = 0;
    while (1) {
        answers = "";
        while (1) {
            getline(cin, input);
            if (input == "")
                break;
            answers += input;
        }
        if (answers == "")
            break;
        unordered_set<int> hash;
        for (char c : answers) {
            if (hash.count(c) > 0)
                continue;
            hash.insert(c);
            n++;
        }
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
