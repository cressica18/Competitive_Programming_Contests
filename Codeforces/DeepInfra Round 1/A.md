# Problem A — Robot Odd Moves

**Contest:** Codeforces

**Problem Link:** https://codeforces.com/problemset/problem/1917/A

## Question

You are given a point \((a,b)\) on the integer grid. A robot starts at \((0,0)\) and can perform the following operation any number of times:

1. Move one unit up or down.
2. Move one unit to the right.

The robot visits a point if it stands there before an operation, between the two moves of an operation, or after an operation.

For each test case, find the minimum number of operations needed for the robot to visit \((a,b)\). If it is impossible, output \(-1\).

## Logic Used

In every operation, the robot moves one unit to the right. During that operation, it can also move vertically by one unit.

If \(b>a+1\), the point is impossible to reach, because after \(a\) operations the robot can only have reached x-coordinate \(a\), and the extra vertical move allows a y-coordinate at most \(a+1\).

Otherwise, if \(|a-b|\) is even, the robot can visit the point after \(a\) operations, so the answer is \(a\). If the difference is odd, it needs one additional operation to visit the point during the vertical part of that operation, so the answer is \(a+1\).

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
        int a, b;
        cin >> a >> b;

        if (b > a + 1)
            cout << -1 << endl;
        else if (abs(a - b) % 2 == 0)
            cout << a << endl;
        else
            cout << a + 1 << endl;
    }

    return 0;
}
```

## Complexity Analysis

- **Time Complexity:** \(O(1)\) per test case, since the solution uses a constant number of arithmetic operations and comparisons.
- **Space Complexity:** \(O(1)\), since only a constant number of variables are used.
