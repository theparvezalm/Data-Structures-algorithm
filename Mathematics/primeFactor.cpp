#include<iostream>
using namespace std;

class Solution {
public:
    void printPrimeFactor(int x) {
        int i=2;
        while (i*i<=x) {
            while (x%i ==0) {
                cout<<i<<" ";
                x = x/i;
            }
            i++;
        }
        if (x>1) {
            cout<<x<<" ";
        }
    }

};
int main() {
    int x;
    cout<<"Enter the number"<<endl;
    cin >> x;
    Solution s;
    s.printPrimeFactor(x);
    return 0;

}