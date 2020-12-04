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
    string curline;
    string passport;
    int n=0;
    while (1){
        passport = "";
        while (1) {
            getline(cin, curline);
            if (curline == "")
                break;
            passport += " ";
            passport += curline;
        }
        if (passport == "")
            break;

        if (passport.find("byr") == passport.npos)
            continue;
        if (passport.find("iyr") == passport.npos)
            continue;
        if (passport.find("eyr") == passport.npos)
            continue;
        if (passport.find("hgt") == passport.npos)
            continue;
        if (passport.find("hcl") == passport.npos)
            continue;
        if (passport.find("ecl") == passport.npos)
            continue;
        if (passport.find("pid") == passport.npos)
            continue;

        if (!(passport[passport.find("byr")+8] == ' ' ||
                    passport[passport.find("byr")+8] == '\0'))
            continue;
        if (!(passport[passport.find("iyr")+8] == ' ' ||
                    passport[passport.find("iyr")+8] == '\0'))
            continue;
        if (!(passport[passport.find("eyr")+8] == ' ' ||
                    passport[passport.find("eyr")+8] == '\0'))
            continue;
        if (passport[passport.find("hgt")+7] == 'c') {
            if (!(passport[passport.find("hgt")+9] == ' ' ||
                        passport[passport.find("hgt")+9] == '\0'))
                continue;
        } else if (passport[passport.find("hgt")+7] == 'n') {
            if (!(passport[passport.find("hgt")+8] == ' ' ||
                        passport[passport.find("hgt")+8] == '\0'))
                continue;
        } else
            continue;
        if (!(passport[passport.find("hcl")+11] == ' ' ||
                    passport[passport.find("hcl")+11] == '\0'))
            continue;
        if (!(passport[passport.find("ecl")+7] == ' ' ||
                    passport[passport.find("ecl")+7] == '\0'))
            continue;
        if (!(passport[passport.find("pid")+13] == ' ' ||
                    passport[passport.find("pid")+13] == '\0'))
            continue;

        int byr = stoi(passport.substr(passport.find("byr")+4,4));
        int iyr = stoi(passport.substr(passport.find("iyr")+4,4));
        int eyr = stoi(passport.substr(passport.find("eyr")+4,4));
        string hgt = passport.substr(passport.find("hgt")+4,5);
        string hcl = passport.substr(passport.find("hcl")+4,7);
        string ecl = passport.substr(passport.find("ecl")+4,3);
        string pid = passport.substr(passport.find("pid")+4,9);

        if (byr < 1920 || byr > 2002)
            continue;
        if (iyr < 2010 || iyr > 2020)
            continue;
        if (eyr < 2020 || eyr > 2030)
            continue;

        if (hgt[3] == 'c' && hgt[4] == 'm') {
            int h = stoi(hgt.substr(0,3));
            if (h < 150 || h > 193)
                continue;
        } else if (hgt[2] == 'i' && hgt[3] == 'n') {
            int h = stoi(hgt.substr(0,2));
            if (h < 59 || h > 76)
                continue;
        } else
            continue;

        if (hcl[0] != '#')
            continue;

        hcl = hcl.substr(1,6);

        for (char c : hcl)
            if (c - '0' < 0 || c - '0' > 9)
                if (c - 'a' < 0 || c - 'a' > 6)
                    goto next;

        if (!(ecl == "amb" || ecl == "blu" || ecl == "brn" || ecl == "gry" ||
                ecl == "grn" || ecl == "hzl" || ecl == "oth"))
            continue;

        for (char c : pid)
            if (c - '0' < 0 || c - '0' > 9)
                goto next;

        n++;
    }
next:

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
