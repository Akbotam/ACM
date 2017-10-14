#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main (){
	string s;
	vector <char> v;
	cin>>s;
	for (int i=0; i<s.length(); i++ ){
		v.push_back(s[i]);
		if (v.size()>1) 
			if (v[v.size()-1]== v[v.size()-2]){
				v.pop_back();
				v.pop_back();
			}
		
	}
	for(int i=0; i<v.size(); i++)
		cout<<v[i];
	
	return 0;
}
