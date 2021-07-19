#include<iostream>
using namespace std;
int main(){
    int t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        for(i=0;i<n;i++){
            if(a[i]==k){
                break;
            }
        }
        if(i<n)
            cout<<"Present "<<i+1;
        else
            cout<<"Not Present "<<i;
    }
    return 0;
}