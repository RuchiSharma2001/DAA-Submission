#include<bits/stdc++.h>
using namespace std;
int binaryCount(int arr[],int k,int n)
{
    int count=0,mid;
    int left=0,found=0;
    int right=n-1;
    while(left<right)
    {
        mid=(left+right)/2;
        if(arr[mid]==k)
        {   count=1;
            found=1;
            break;
        }else if(arr[mid]<k){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    if(found==1)
    {
        int id=mid-1;
        while(arr[id]==k&&id>=0)
        {
            count++;
            id--;
        }
        int check=mid+1;
        while(arr[check]==k&&check<n)
        {
           count++;
           check++; 
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int ans=binaryCount(arr,key,n);
        cout<<ans;
    }
}