#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    string numbers[] = {
        "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << numbers[i] << endl;
        } else {
            cout << (i % 2 == 0 ? "even" : "odd") << endl;
        }
    }

    return 0;
}
