#include <bits/stdc++.h>
#define MOD 1000000007
#define init(arr, val) memset(arr, val, sizeof(arr))
#define ull unsigned long long int
#define ll long long
#define PL pair<ll, ll>
#define PI pair<int, int>
#define vl vector<ll>
#define endl "\n"
#define vi vector<int>
#define um unordered_map
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define sortall(a) sort(all(a))
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, s = 0, flag = 0;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        unordered_map<int, int> m;
        for (int i = 0; i < a; i++)
        {
            s = s + arr[i];
            if (m[s] == 1)
            {
                flag = 1;
                cout << "Yes" << endl;
                break;
            }
            else
                m[s] = 1;
        }
        if (flag == 0)
            cout << "No" << endl;
    }
}