#include <iostream>
using namespace std;

int main()
{
    int m[10][10], r, c, sumin, sumout, n, v, i;
    //  clrscr();
    cout << ("Enter number of vertices:\n");
    cin >> n;
    cout << "Enter the elements of the matrix:\n";
    for (r = 0; r < n; r++)
        for (c = 0; c < n; c++)
        {
            m[r][c] = 0;
            if (r != c)
            {
                cin >> m[r][c];
            }
        }
    cout << ("\n\nVertex\t\tIndegree\tOutdegree\n");
    for (v = 0; v < n; v++)
    {
        sumin = sumout = 0;
        for (i = 0; i < n; i++)
        {
            sumin = sumout + m[i][v];
            sumout = sumout + m[v][i];
        }
        cout << v + 1 << "\t\t" << sumin << "\t\t" << sumout << endl;
    }

    return 0;
}