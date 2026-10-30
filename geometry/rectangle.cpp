/*
 * project   : https://github.com/Robin005cr/linear_algebra
 * file name : rectangle.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
};

long long distSq(Point a, Point b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;

    return dx * dx + dy * dy;
}

bool isRectangle(vector<Point>& p) {
    vector<long long> d;

    // Calculate all 6 pairwise squared distances
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            d.push_back(distSq(p[i], p[j]));
        }
    }

    sort(d.begin(), d.end());

    // Reject duplicate points / zero-length sides
    if (d[0] == 0)
        return false;

    // Two pairs of equal sides and equal diagonals
    if (d[0] != d[1] ||
        d[2] != d[3] ||
        d[4] != d[5]) {
        return false;
    }

    // Pythagorean relationship
    return d[0] + d[2] == d[4];
}

int main() {
    vector<Point> p = {
        {0, 0}, {4, 0}, {4, 3}, {0, 3}
    };

    cout << (isRectangle(p) ? "Rectangle" : "Not Rectangle");
}
