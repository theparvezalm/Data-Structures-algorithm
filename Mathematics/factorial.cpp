#include<iostream>
using namespace std;
class Solution{
public:
    static long long int factorial(int x){
        long long int fact = 1;
        while (x>0){
            fact = fact*x;
            x--;

        }
        return fact;

    }
    static int trailingZeroCount(long long int fact){
        int count = 0;
        while(fact % 10 == 0) {
            count++;
            fact /= 10;
        }
        return count;

    }

};
int main(){
    int x;
    cout<<"Enter Number for factorial:";
    cin>>x;
    const long long fact = Solution::factorial(x);
    cout<<"Factorial of "<<x<<"!="<<fact<<endl;
    int count = Solution::trailingZeroCount(fact);
    cout<<"trailingZeroCount "<<x<<"!="<<count<<endl;
    return 0;

}