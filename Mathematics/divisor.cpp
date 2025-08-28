#include <iostream>
using namespace std;

class Solution {
public:
    void PrintAllDivisor(int x) {
        int i = 1;
        for (; i * i <= x; i++) {
            if (x % i == 0) {
                cout << i << endl;
            }
        }
        i--; // go back to last valid i (sqrt(x))
        for (; i >= 1; i--) {
            if (x % i == 0 && x / i != i) { // avoid duplicate when i*i == x
                cout << x / i << endl;
            }
        }
    }
};

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;
    Solution s;
    s.PrintAllDivisor(x);
    return 0;
}
