#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
 

#define mod 1000000007


stack<pair<int,int> > s;
 
int a[1000010];
 
 
int main() {
 
    int n,k;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
      cin>> a[i];
    }
    long long ans = 1;
    for(int i = 0; i<n; i++)
     {
        if(s.empty() || a[i] >= s.top().first ) s.push(make_pair(a[i],i));
        else
         {
           while(!s.empty() && a[i] < s.top().first)
            {
               pair<int,int> x = s.top();
              s.pop();
              ans = (ans*((long long)(i-x.second+1)))%mod;
            }            
           s.push(make_pair(a[i],i));          
         }    
     }
    cout << ans;
    
    
  
  return 0;
}
