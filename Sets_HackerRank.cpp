#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define mll map<ll, ll>
#define test     \
    ll tttt;     \
    cin >> tttt; \
    while (tttt--)
#define floop(i, k, n) for (ll i = k; i < n; i++)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pba push_back
#define F first
#define S second
#define all(s) s.begin(), s.end()
#define pie 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986

int main()
{
    multiset<ll> st;
    ll check, value;
    test
    {
        cin >> check;
        cin >> value;
        if (check == 1)
        {
            st.insert(value);
        }
        else if (check == 2)
        {
            auto itr = st.find(value);
            if (itr != st.end())
                st.erase(value);
        }
        else
        {
            auto itr = st.find(value);
            if (itr != st.end())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}