#include<iostream>
using namespace std;
class Solution{
public:
    // bool isPrime(int x){
    //     if (x<=1) return false;
    //     if (x == 2) return true;
    //     if (x % 2 == 0 || x%3 ==0) return false;
    //     int countFactor = 0;
    //     int num = x;
    //     while(num>0){
    //         if (x%num==0){
    //             countFactor++;
    //         }
    //         num --;
    //     }
    //     if (countFactor>2){
    //         return false;
    //     }
    //     return true;
    // }
    //alternate better solution
    bool isPrime(int x){
        if (x<=1) return false;
        if (x == 2) return true;
        if (x % 2 == 0 || x%3 ==0) return false;
        int i =2;
        while (i*i<x) {
            if (x%i==0) return false;
            i++;
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