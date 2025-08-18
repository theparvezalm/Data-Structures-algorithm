#include<iostream>
using namespace std;
class Solution{
    public:
    long long factorial(int x){
        if (x == 0){
            return 1;
        }
        long long fact = 1;
        for(int i=1;i<=x;i++){
            fact = fact*i;

        }
        return fact;
    }

};
int main(){
    int x;
    cout<<"Enter Number:";
    cin>>x;
    Solution sol;
    long long fact = sol.factorial(x);
    cout<<"Factorial of "<<x<<"!="<<fact<<endl;
    
}