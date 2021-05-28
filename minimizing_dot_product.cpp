#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        vector<int> b;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        { //initialization of 'a' vector
            int value;
            cin >> value;
            a.push_back(value);
        }
        for (int i = 0; i < n; i++)
        { //initialization of 'b' vector
            int value;
            cin >> value;
            b.push_back(value);
        }
        sort(a.begin(), a.end());
        sort(b.begin(),b.end(),greater<int>());
        // reverse(b.begin(),b.end());

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i] * b[i];
        }
        cout << sum<<endl;
        a.clear();
        b.clear();
    }
    return 0;
}