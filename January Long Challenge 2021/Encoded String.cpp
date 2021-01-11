#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n/4;i++){
            int sum=0,temp;
            for(int j=0;j<4;j++){
                if(arr[(i*4)+j]=='1'){
                    sum+=8/(pow(2,j));
                    //cout<<8/(pow(2,j))<<endl;
                }
            }
            c=sum+97;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
