#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	string s;
	int n=0, cnt=0;
	cin>>s;
	for (int i=s.size(); i>=0; i--){
		if (s[i]-48==4){
			s[i]=1;
		}
		if (s[i]-48==7){
			s[i] = 2;
		}
		cnt+=(int)(s[i]*pow(2.0, n));
		n++;
	}
	cout<<cnt;
	
	return 0; 
}
