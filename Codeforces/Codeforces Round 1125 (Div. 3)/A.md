# Problem A — In Search of Convenience

**Contest:** Codeforces Round 1125 (Div. 3)

**Problem Link:** https://codeforces.com/contest/2275/problem/A

## Question

K1o0n got a router and placed it at point (𝑥0,𝑦0)
; we will consider the apartment layout as a coordinate plane, and the floor is tiled, so the furniture can stand only at lattice points with integer coordinates.

The internet spreads exactly 𝑅
 meters around the router. K1o0n wants to move his computer as far away from it as possible — but still so that the internet is available. Therefore, the desk with the computer must be placed exactly on the reception boundary, at a distance of 𝑅
 from the router. For example, if the router is at point (5,5)
 and 𝑅=5
, then the desk can be placed at point (2,1)
, because (5−2)2+(5−1)2=52
.

Find any point with integer coordinates that is exactly 𝑅
 away from (𝑥0,𝑦0)
.

Recall that the distance from the point (𝑥0,𝑦0)
 to the point (𝑥,𝑦)
 is (𝑥0−𝑥)2+(𝑦0−𝑦)2‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾√
.

Input
The first line contains an integer 𝑡
 (1≤𝑡≤104
) — the number of testcases.

The only line of each testcase contains three integers 𝑥0
, 𝑦0
, and 𝑅
 (−10≤𝑥0,𝑦0≤10
, 1≤𝑅≤25
) — the coordinates of the router and the coverage radius.

Output
For each testcase, output two integers 𝑥
 and 𝑦
 — the coordinates of the desk.

If there are several suitable points, output any of them.



## Logic Used

I kept the x-coordinate of the required point equal to the router's x-coordinate, so \(x=x_0\).

Then, I added the radius \(R\) to the router's y-coordinate to obtain \(y=y_0+R\).

## Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x0, y0, r;
        cin >> x0 >> y0 >> r;

        int x, y;
        x = x0;
        y = y0 + r;

        cout << x << " " << y << endl;
    }

    return 0;
}
```

## Complexity Analysis

- **Time Complexity:** \(O(1)\) per test case, since each test case requires only a constant number of operations.
- **Space Complexity:** \(O(1)\), since only a constant number of variables are used.