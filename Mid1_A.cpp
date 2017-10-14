#include <iostream>

using namespace std;
   struct Num {
   	int x, y;
   };
  
   int reverse(int a){
   	 int remainder, reversedNumber1=0;
   		while(a!=0){
			remainder = a%10;
			reversedNumber1 =  reversedNumber1*10 + remainder;
			a/=10;	
		}
		return reversedNumber1;
   }
int main(){
	int n;
	int q;
	cin>>n;
	Num a[n];
	int b[n];
	for (int i=0; i<n; i++){
		cin>>a[i].x>>a[i].y;
		 q = reverse(a[i].x) + reverse(a[i].y);
		b[i] = reverse(q);
	}
	for (int i=0; i<n; i++){
		cout<<b[i]<< " ";
	}
	
	
	return 0;
}

