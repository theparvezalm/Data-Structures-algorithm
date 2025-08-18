#include<iostream>
using namespace std;
class Solution{
    public:
    bool isPalindrome(int x){
        if (x < 0) return false;
        int tempNum = x;
        int revNum = 0;
        while(tempNum >0){
            revNum = revNum*10 +(tempNum%10);
            tempNum = tempNum/10;
        }
        

        return x == revNum;
    }

};
int main(){
    cout << "Enter number: ";
    int x;
    cin >> x;

    Solution sol;
    bool result = sol.isPalindrome(x);
    cout << "isPalindrome = " << (result ? "true" : "false") << endl;

    return 0;
}