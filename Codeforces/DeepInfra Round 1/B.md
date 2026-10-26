# Problem B — MEX Game

**Contest:** Codeforces

**Problem Link:** https://codeforces.com/contest/2271/problem/B

## Question

You are given an even integer \(n\), a positive integer \(k\), and \(n\) cards, each containing an integer \(a_i\).

For a multiset \(S\), \(\operatorname{mex}_k(S)\) is defined as the smallest non-negative integer that appears in \(S\) fewer than \(k\) times.

Alice and Bob take turns picking one card each, with Alice moving first. The game ends when all cards have been taken, so each player gets exactly \(n/2\) cards.

Alice wins if \(\operatorname{mex}_k(A) \ne \operatorname{mex}_k(B)\), where \(A\) and \(B\) represent the multisets of cards taken by Alice and Bob, respectively. Otherwise, Bob wins.

Determine whether Alice wins if both players play optimally.

## Logic Used

First, I stored the frequency of every number from \(0\) to \(n\) in a frequency array called `cnt`.

Then, I iterated through the numbers in increasing order to find the first number whose frequency is less than \(2k\). This number is stored in `idx`, since all smaller numbers appear at least \(2k\) times and can therefore be distributed so that both players have at least \(k\) copies.

If `cnt[idx] == 2*k - 1`, Alice can force the two players to have different \(k\)-MEX values, so I print `"YES"`. Otherwise, I print `"NO"`.

## Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> cnt(n + 1);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            cnt[x]++;
        }

        long long idx = 0;

        for (int i = 0; i <= n; i++) {
            if (cnt[i] >= 2 * k)
                continue;
            else {
                idx = i;
                break;
            }
        }

        if (cnt[idx] == 2 * k - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
```

## Complexity Analysis

- **Time Complexity:** \(O(n)\) per test case, since we count the frequencies of all \(n\) cards and iterate through the frequency array at most once.
- **Space Complexity:** \(O(n)\), since the frequency array stores the counts of numbers from \(0\) to \(n\).