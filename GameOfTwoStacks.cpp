#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        int sum=0;
        int cnt=-1;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }
        // your code goes here
         while(sum<=x){
             if (n>m){
            for (int i=0; i<n; i++){
                if (a.front()<b.front())  {
                    sum+=a.front();
                    a.pop_back();
                cnt++;  
                    break; 
                }
                else { 
                    sum+=b.front();
                b.pop_back();
                cnt++;
                    break;
                }
            }
           }
             else{
                 for (int i=0; i<m; i++){
                if (a.front()<b.front())  {
                    sum+=a.front();
                    a.pop_back();
                cnt++;  
                    break; 
                }
                else { 
                    sum+=b.front();
                b.pop_back();
                cnt++;
                    break;
                }
            }
                 
             }
         } 
        cout<<cnt-1<<endl; 
       
    }
    return 0;
} 

