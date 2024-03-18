#include <bits/stdc++.h>
using namespace std;

map<char, int> freq;

int main()
{
    string s;
    cin >> s;
    int N = s.size();
    for (int i = 0; i < N; i++){
        char c = s[i];
        freq[c] += 1;
    }

    int e = 0;
    int o = 0;
    string l = "";
    string r = "";
    char t = ' ';
    for (auto i = freq.begin(); i != freq.end(); i++)
    {
        // cout << i->first << " \t\t\t" << i->second << endl;
        if (i->second % 2 == 0)
        {
            l += string(i->second / 2, i->first);
            r.insert(0, i->second / 2, i->first);
            e += 1;
        }
        else
        {
            if (i->second > 1)
            {
                l += string(i->second / 2, i->first);
                r.insert(0, i->second / 2, i->first);
            }
            t = i->first;
            o += 1;
        }
    }

    if (o > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    if (t == ' ')
        cout << l << r << endl;
    else
        cout << l << t << r << endl;
    return 0;
}