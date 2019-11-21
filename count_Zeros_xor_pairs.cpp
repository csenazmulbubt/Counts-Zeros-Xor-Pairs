#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        count=0;
        for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            if((arr[i]^arr[j])==0)count++;
        }
        cout<<count<<endl;
    }
}
