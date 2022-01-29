#include<bits/stdc++.h>

using namespace std;
double x = 1e-6;
double multiply(double mid,int n){
     double ans=1;
    for(int i = 1; i <=n; i++)

    {
            ans = ans*mid; 
    }
    return ans;
    
}
int main(){
    int n;
    long long int m;
    cin>>n>>m;

    double low=1;
    double high = m;
    double mid;
    while(high - low > x){
        mid = (high+low)/2;
        if(multiply(mid,n) < m){
            low = mid;
        }
        else{
            high=mid;
        }
    }
    cout<<low<<endl;

}