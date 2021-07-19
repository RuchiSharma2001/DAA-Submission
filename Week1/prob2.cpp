#include<iostream>
using namespace std;
int main(){
    int t,n,k,i,fg=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        int lb=0,ub=n-1;
        int mid=(lb+ub)/2;
        i=0;
        while(lb<=ub){
            if(a[mid]==k){
                fg=1;
                break;
                
            }
            else if(a[mid]<k){
                lb=mid+1;
            }
            else if(a[mid>k]){
                ub=mid-1;
            }
            mid=(lb+ub)/2;
            i++;
        }
        if(fg==1)
            cout<<"Present "<<i+1;
        else
            cout<<"Not Present "<<i;
    }
    return 0;
}