#include <bits/stdc++.h>
using namespace std;
 
int countRectangles(int l, int w)
{
    // if we take gcd(l, w), this
    // will be largest possible
    // side for square, hence minimum
    // number of square.
    int squareSide = __gcd(l, w);
 
    // Number of squares.
    return (l * w) / (squareSide * squareSide);
}
 
// Driver code
int main()
{
    int l = 10, w = 15;
    cout << countRectangles(l, w) << endl;
    return 0;
}