#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack<char>st;
        for(int i=0; i<s.size(); i++){
		  if(st.empty()){
			st.push(s[i]);
			continue;
		}
		if(st.top() == '['){
			if(s[i] == ']')
				st.pop();
			else
				st.push(s[i]);
		}
		else{
			if(st.top() == '(')
			{
				if(s[i] == ')')
					st.pop();
				else
					st.push(s[i]);
			}
			else{
				if(st.top() == '{')
				{
					if(s[i] == '}')
					st.pop();
				else
					st.push(s[i]);
				}
			}
		}
        
    }
    if(st.empty())
		       return "YES";
		else
		       return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout <<result<< endl;
    }
    return 0;
}

