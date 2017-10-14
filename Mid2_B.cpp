#include <iostream>
#include <iostream>
#include <stack>

using namespace std;

int main() {
	   while(true) {
	   
		int n;
		cin>>n;
		
		stack<int>st;
		
		int cur = 0;
		for (int i=0; i<n; i++){
			int numb;
			cin>>numb;
			if (numb==0) break;
			if (numb-cur==1)
			cur++;
			else {
				st.push(numb);
			}
			if (st.top()-cur==1){
				while (st.top()-cur==1 && st.size()>1){
					cur++; st.pop();
				}
			}
		}
		if (st.size()==1)
		cout<<"yes"<<endl;
		else 
		cout<<"no"<<endl; }
	
	return 0;
}
