#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main(){
	string s1;
	int t=0;
	getline(cin, s1);
	sort(s1.begin(), s1.end());
	for (int i=0; i<s1.length(); i++){
		if (s1[i]!=s1[i+1] && s1[i]>='a' && s1[i]<='z' ){
			t++;
		}
	}
	cout<<t;
	
	
	return 0;
}
