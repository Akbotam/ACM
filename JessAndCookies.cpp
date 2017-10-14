#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class cook
{
    public:
     cook()
             {
                 cin>>n;
                 cin>>k;
             }
    int getn()
    {
        return n;
    }
     int getk()
    {
        return k;
    }
   void insert(const int &x);
   void mul();
   void delet(long int &);
     private: int current=0,n,k;
             int i=0;
             int *a=new int[n];
             int *b=new int[n];
       
  
};
void cook::insert(const int &x)
{    
   current=current+1;
     a[current]=x;
     int h=current;
     while(h!=1 && x<a[h/2])        
    {
        a[h]=a[h/2]; 
        h=h/2;
     }
     a[h]=x;
}
void cook::delet(long int &t)  
{
    t=a[1];
    int x=a[current];
    current=current-1;
   int w=1*2;
  while(w<=current)  
  {
      if(a[w+1]<a[w] && w<current)
          w++;
          if(x<=a[w])
              break;
        a[w/2]=a[w];
        w=w*2;
   }
    a[w/2]=x;
}
void cook::mul()   
{
  int c=0;
long  int one=0,two=0;
    long unsigned int sum=0;
 while((a[1]<k) && (current>1))
 {
     delet(one);     
     delet(two);       
     sum=one+two*2;   
     insert(sum);    
     c=c+1;
  }
     if(current==1 && a[1]<k)  
          cout<<-1;
    else
        cout<<c<<endl;
}
int main() 
{
    cook h;
     int v;
for(int i=0;i<h.getn();i++)
 {
     cin>>v;
     h.insert(v);
 }
    h.mul();
   return 0;
}

