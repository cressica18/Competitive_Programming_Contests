# Problem B — Did Not Go to Print

**Contest:** Codeforces Round 1125 (Div. 3)

**Problem Link:** https://codeforces.com/contest/2275/problem/B

## Question

There are \(n\) documents numbered from \(1\) to \(n\). Initially, the printer's memory is empty. The friends perform \(n\) commands, represented by a string \(a\) consisting of the characters `1`, `2`, and `3`.

Each command works as follows:

- **`1` — Scanning:** Document \(i\) is placed on top of the printer's memory stack.
- **`2` — Printing from memory:** If the memory is not empty, the topmost document is printed and removed. Otherwise, document \(i\) is printed.
- **`3` — Quick print:** Document \(i\) is printed directly.

The task is to find all document indices that were **not printed**, and output their count followed by their indices in increasing order.

## Logic Used

I used a stack to simulate the printer's memory and a vector to store the indices of printed documents. For command 1, I pushed the current index onto the stack; for command 2, I printed the topmost document if the stack was non-empty, otherwise the current document; and for command 3, I printed the current document directly. Finally, I sorted the printed indices and used binary search to find and output the documents that were not printed.


## Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a;
        cin >> a;

        vector<int> result;
        stack<int> s;

        for (int i = 1; i <= n; i++) {
            if (a[i - 1] == '1') {
                s.push(i);
            }
            else if (a[i - 1] == '2') {
                if (!s.empty()) {
                    result.push_back(s.top());
                    s.pop();
                }
                else {
                    result.push_back(i);
                }
            }
            else if (a[i - 1] == '3') {
                result.push_back(i);
            }
        }

        int not_printed = n - result.size();
        cout << not_printed << endl;

        sort(result.begin(), result.end());

        for (int i = 1; i <= n; i++) {
            if (!binary_search(result.begin(), result.end(), i)) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
```

## Complexity Analysis

Let \(n\) be the number of documents in a test case.

- **Time Complexity:** \(O(n\log n)\). Simulating the commands takes \(O(n)\), sorting the printed indices takes \(O(n\log n)\), and performing \(n\) binary searches takes \(O(n\log n)\).
- **Space Complexity:** \(O(n)\), for the stack and the vector storing printed document indices.