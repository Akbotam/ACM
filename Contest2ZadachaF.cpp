#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
	int count=0;
	int counter=0;
	int n = s.length();
	for (int i=0; i<s.length(); i++){
		if (s[i]=='(') {
		 count++; }
		else {
		 count--;}
		 	}
		 	if (count==0) {
		 	
			 for (int i=0; i<s.length(); i++){
			 	if (s[i]==')' && s[i+1] =='(')
			 	counter++;
			 } 
			 cout<<n-2*counter; 
			 }
		 	if (count<0) cout<<n+count;
		 	if (count>0) cout<<n-count;
	
	return 0;
}
