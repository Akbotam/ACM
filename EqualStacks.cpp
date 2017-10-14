#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int sum1=0; int sum2 = 0; int sum3 = 0;  
    stack<int>st1;  
    stack<int>st2;
    stack<int>st3;
    int a[n1]; int b[n2]; int c[n3];
    for (int i=0; i<n1; i++){
        cin>>a[i]; 
        sum1+=a[i];
    }
    for (int i=0; i<n2; i++){
        cin>>b[i];
        sum2+=b[i];
    }
    for (int i=0; i<n3; i++){
        cin>>c[i];
        sum3+=c[i];
    }
    if (st1.empty()){
        for (int i=n1-1; i>=0; i--)
            st1.push(a[i]);
    }
    if (st2.empty()){
        for (int i=n1-1; i>=0; i--)
            st2.push(b[i]);
    }
    if (st3.empty()){
        for (int i=n1-1; i>=0; i--)
            st3.push(c[i]);
    }
    bool equalHeight = false;
    if (sum1==sum2 && sum2==sum3){
        equalHeight = true;
    }
    while(!equalHeight) {
        if (sum1>=sum2 && sum1>=sum3 ){
        sum1-=st1.top();
        st1.pop();
        }
        else if (sum2>=sum1 && sum2>=sum3){
        sum2-=st2.top();
        st2.pop(); 
        }
       else if (sum3>=sum1 && sum3>=sum2){
        sum3-=st3.top();
        st3.pop(); 
        }
        if ((sum1==sum2 && sum2==sum3) || (sum1==0 && sum2==0 && sum3==0)) {
            equalHeight = true;
        }
        
       }
    cout<<sum1<<endl; 
    
    return 0;
}
