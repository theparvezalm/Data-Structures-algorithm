//Take integer X as an argument and return counts of digits in X
#include<iostream>
using namespace std;
class Solution{
    public:
    int countDigit(int x){
        int count = 0;
        if(x == 0){
            count++;
            return count;
        }
        while(x >0){
            x = x/10;
            count++;
        }
        return count;
    }
};

int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    Solution s;
    int count = s.countDigit(x);
    cout<<"Number of digits = "<<count<<endl;

}