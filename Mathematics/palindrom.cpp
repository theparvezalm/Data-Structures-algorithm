#include<iostream>
using namespace std;
class Solution{
    public:
    // bool isPalindrome(int x){
    //     if (x < 0) return false;
    //     int tempNum = x;
    //     int revNum = 0;
    //     while(tempNum >0){
    //         revNum = revNum*10 +(tempNum%10);
    //         tempNum = tempNum/10;
    //     }
        

    //     return x == revNum;
    // }
    //Alternate
    bool isPalindrome(int x){
        // Negative numbers or numbers ending with 0 (except 0) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int reversedHalf = 0;
        while(x > reversedHalf){
            reversedHalf = reversedHalf * 10 + x % 10;
            x = x / 10;

        }
        return (x == reversedHalf || x == reversedHalf / 10);
    
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