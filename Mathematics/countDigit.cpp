//Take integer X as an argument and return counts of digits in X
#include<iostream>
#include <cmath>
using namespace std;


class Solution{
    public:
    int countDigits(int x){
        if (x == 0) return 1;
        x= abs(x);
       int count = 0;
        while(x>0){
            x = x/10;
            count++;
        }
        return count;
    }
    //Alternate
    // int countDigits(int x) {
    //     if (x == 0) return 1;
    //     return static_cast<int>(log10(abs(x))) + 1;
    // }

};
int main(){
    int x=0;
    cout<<"Enter the number"<<endl;
    cin>>x;
    Solution sol;
    int count = sol.countDigits(x);
    cout<<"Number of digits in number:"<<x<<"="<<count<<endl;
    return 0;
}