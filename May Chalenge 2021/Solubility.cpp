#include <iostream>
using namespace std;

int main() {
	
	int a,b,x,t,ans=0;
	cin>>t;
	while(t>0)
	{
    	cin>>x;
    	cin>>a;
	    cin>>b;
	    x=(100-x)*b;
	    ans=(x+a)*10;
	    cout<<ans;
	    cout<<"\n";
	    t--;
	}
	    return 0;
}
