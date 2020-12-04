#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define l long long 

int main(){
    l int n,k,t,i,q,r,s,j;
    l int count=0;
    l int sum=0;
    l int ans,vac,d1, d2,v1,v2,p;
    
cin>>d1>>v1>>d2>>v2>>p;

for(i=1;i<=100000;i++) 
{
if(d1<=i)
  sum+=v1;

if(d2<=i)
  sum+=v2;

if(sum>=p)
  break;
}
cout<<i;
        }
