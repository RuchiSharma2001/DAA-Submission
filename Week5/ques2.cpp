#include<bits/stdc++.h>
using namespace std;
void twoSum(int arr[],int n,int sum)
{
    sort(arr,arr+n);
    int flag=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        int temp=sum-arr[i];
        if(s.find(temp)!=s.end())
        {
            flag=1;
            cout<<arr[i]<<" "<<temp<<"\n";
        }
        s.insert(arr[i]);
    }
    if(flag==0)
    {
        cout<<"No Such element exists\n";
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
        int sum;
        cin>>sum;
        twoSum(arr,n,sum);
    }
    return 0;
}