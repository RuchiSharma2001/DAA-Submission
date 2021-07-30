#include<bits/stdc++.h>
using namespace std;
void twoSum(int arr[],int n)
{
    int i=0,j,k,found=0;
    j=i+1;
    k=n-1;
    for(k=n-1;k>=0;k--)
    {   i=0;
        j=k-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==arr[k])
            {
                found=1;
                break;
            }else if(arr[i]+arr[j]>arr[k])
            {
                j--;
            }else{
                i++;
            }
        }
        if(found==1)
            break;
    }    
    if(found==1)
    {
        cout<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
    }else{
        cout<<"Sequence not found"<<"\n";
    }
    
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
        twoSum(arr,n);
    }
}