#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

  string s = " "; 
  vector <char> v;

  void insert(string s){
    for (int i=0; i<s.size(); i++){
        v.push_back(s[i]); 
    }
  }
  void delete(int n){
      for (int i=0; i<n; i++)
          v.pop_back();
  }
  char print(int n){
      char c =  v.at(v.begin()+n); 
      return c;
  }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int Q;
    int n;
    cin>>Q;
    for (int i=0; i<Q; i++){
        cin>>n;
        switch(n){
            case 1:  string s; cin>>s; insert(s); break;
            case 2:  int n; cin>>n; delete(n); break;
            case 3:  int n; cin>>n; cout<<print(n);  break;  
        }
        
        
    }
    
    return 0;
}

