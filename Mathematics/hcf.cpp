#include<iostream>
using namespace std;
class Solution{
    public:
    //solution 1
    // int getFactor(int x, int y){
    //     int min = x;
    //     if(x>y){
    //         min = y;
    //     }
    //     while(min>0){
    //         if ( x % min == 0 && y%min==0){
    //            return min;

    //         }
    //         min--;
    //     }
    //     return 1;
    // }
    //alternate eucliden algorithm
    //hcf(a,b)=hcf(a-b,b) //assuming b to be smaller
    // int getFactor(int x, int y) {
    //     while (x!=y) {
    //         if (x>y) {
    //             x=x-y;
    //         }else {
    //             y=y-x;
    //         }
    //     }
    //     return x;
    //     }
    int getFactor(int x, int y) {
        while (x%y!=0) {
            int temp =y;
            temp = x%y;
            y= temp;
        }
        return y;
    }
    //eucliden algorithm - x*y = gcd(a,b) * lcm(a,b)
    int Lcm(int fact,int x, int y) {
        return (x*y)/fact;
    } 

};

int main(){
    int x,y;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    Solution sol;
    int hcf = sol.getFactor(x,y);
    int lcm = sol.Lcm(hcf,x,y);
    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}