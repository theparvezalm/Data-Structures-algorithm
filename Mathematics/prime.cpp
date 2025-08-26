#include<iostream>
using namespace std;
class Solution{
    public:
    bool isPrime(int x){
        if (x<=1) return false;
        if (x == 2) return true; 
        if (x % 2 == 0) return false;
        int countFactor = 0;
        int num = x;
        while(num>0){
            if (x%num==0){
                countFactor++;
            }
            num --;
        }
        if (countFactor>2){
            return false;
        }
        return true;
    }

};
int main(){
    int x;
    cout<<"Enter number to check prime";
    cin>>x;
    Solution sol;
    bool isPrime = sol.isPrime(x);
   cout << "isPalindrome = " << (isPrime ? "true" : "false") << endl;
   return 0;

}