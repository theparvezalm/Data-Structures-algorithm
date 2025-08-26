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
    int getFactor(int x, int y) {
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        return x; // x will be the HCF
    }
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