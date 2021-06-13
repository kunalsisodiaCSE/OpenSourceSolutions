#include <bits/stdc++.h>
//Author Kunal Sisodia

using namespace std;
#define ll long long
#define vll vector<ll>
#define mll map<ll, ll>
#define str    \
    string st; \
    cin >> st;
#define numb \
    ll num;  \
    cin >> num;
#define test     \
    ll tttt;     \
    cin >> tttt; \
    while (tttt--)
#define floop(i, k, n) for (ll i = k; i < n; i++)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);                   \
    s
#define pba push_back
#define F first
#define S second
#define all(s) s.begin(), s.end()
#define pie 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986

int main()
{
    ll arr;
    map<string, ll> mpp;
    test
    {
        //    int arr[tttt];
        cin >> arr;
        if (arr == 1)
        {
            string st;
            cin >> st;
            ll num;
            cin >> num;

            auto itr = mpp.find(st);
            if (itr == mpp.end())
            {       //insertion is being done here.
                mpp.insert(make_pair(st, num));
            }
            else
            {
                mpp[st] += num;          //this is done in order to add the repeated content as maps doesn't store repeating data
            }
        }
        else if (arr == 2)
        {
            string st;
            cin >> st;
            mpp.erase(st);
        }
        else
        {
            string st;
            cin >> st;
            // map<string,int>::iterator
            auto itr = mpp.find(st);            //pointer to find the key element
            if (itr == mpp.end())
            {
                cout << "0\n";
            }
            else
            {
                cout << itr->second;
                cout << endl;
            }
            // cout<<mpp.find(st);
        }
        // cout << endl;
    }
    return 0;
}