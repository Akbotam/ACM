#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for (int i=0; i<n; i++){
        cin>>h[i];
    }
    stack<pair<int,int> > st;
    int l[n];
    int r[n];
    for (int i=0; i<n; i++){
        if (st.empty()){
            st.push(make_pair(h[i], i));
            l[i] = i;
        }
        else if(h[i]<st.top().first){
            int pos = i;
                while(!st.empty()){ 
                   if(h[i]>st.top().first){
                       break;
                   }
                    pos = st.top().second;
                    st.pop();
                }
            st.push(make_pair(h[i], pos));
            l[i] = pos;
        }
        else {
            st.push(make_pair(h[i], i));
            l[i] = i;
        }
    }
    while (!st.empty())
        st.pop();
    for (int i=n-1; i>=0; i--){
        if (st.empty()){
            st.push(make_pair(h[i], i));
            r[i]=i;
        }
        else if (h[i]<st.top().first){
            int pos = i;
            while(!st.empty()){
                if (h[i]>st.top().first){
                    break;
                }
                pos = st.top().second;
                st.pop();
            }
            st.push(make_pair(h[i], pos));
            r[i] = pos;
        }
        else {
            st.push(make_pair(h[i], i));
            r[i] = i;
        }
    }
    int ans[n];
    for (int i=0; i<n; i++){
        ans[i] = h[i]*(abs(l[i]-r[i])+1);
        
    }
    int max = ans[0];
    for (int i=0; i<n; i++){
        if (max<ans[i])
            max = ans[i];
    }
    cout<<max<<endl;
    return 0;
}
