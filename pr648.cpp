// Limak is a little polar bear. He has n balls, the i-th ball has size ti.

// Limak wants to give one ball to each of his three friends. Giving gifts isn't easy — there are two rules Limak must obey to make
// friends happy:

// No two friends can get balls of the same size.
// No two friends can get balls of sizes that differ by more than 2.
// For example, Limak can choose balls with sizes 4, 5 and 3, or balls with sizes 90, 91 and 92. But he can't choose balls with sizes
// 5, 5 and 6 (two friends would get balls of the same size), and he can't choose balls with sizes 30, 31 and 33 (because sizes 30 and 33
// differ by more than 2).

// Your task is to check whether Limak can choose three balls that satisfy conditions above.

// Input
// The first line of the input contains one integer n (3 ≤ n ≤ 50) — the number of balls Limak has.

// The second line contains n integers t1, t2, ..., tn (1 ≤ ti ≤ 1000) where ti denotes the size of the i-th ball.

// Output
// Print "YES" (without quotes) if Limak can choose three balls of distinct sizes, such that any two of them differ by no more than 2.
// Otherwise, print "NO" (without quotes).

// Examples
// inputCopy
// 4
// 18 55 16 17
// outputCopy
// YES
// inputCopy
// 6
// 40 41 43 44 44 44
// outputCopy
// NO
// inputCopy
// 8
// 5 972 3 4 1 4 970 971
// outputCopy
// YES

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool check = false;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] == 1)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[k] - a[j] == 1)
                    {
                        check = true;
                        break;
                    }
                }
            }
        }
    }

    if (check)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}