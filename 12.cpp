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
    int n = 0,i;
    while (1) {
        answers = "";
        vector<char> chars, a;

        getline(cin, input);
        if (input == "")
            break;
        answers += input;

        for (char c : input)
            if (find(chars.begin(),chars.end(),c) == chars.end())
                chars.PB(c);

        while (1) {
            getline(cin, input);
            if (input == "")
                break;
            answers += input;
            FOR (i,(int)input.length()) {
                auto f = find(chars.begin(),chars.end(),input[i]);
                if (f != chars.end())
                        a.PB(input[i]);
            }
            chars.assign(a.begin(), a.end());
            a.clear();
        }
        if (answers == "")
            break;
        n += chars.size();
        cout << chars.size() << "\n";
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
