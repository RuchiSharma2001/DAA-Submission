#include<bits/stdc++.h>
using namespace std;
int differnce(int arr[],int n,int key)
{
    int count = 0;
    sort(arr, arr+n);  
 
    int i = 0;
    int j = 0;
    while(j < n)
    {
         if(arr[j] - arr[i] == key)
        {
              count++;
              i++;
              j++;
        }
         else if(arr[j] - arr[i] > key)
              i++;
         else 
              j++;
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
        int ans=differnce(arr,n,key);
        cout<<ans;
    }
    return 0;
}