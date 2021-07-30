#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    
    int j = sqrt(n);
    int k = 0;
    while (arr[min(j, n)-1] < key)
    {
        k = j;
        j += sqrt(n);
        if (k >= n)
            return -1;
    }
 
    while (arr[k] < key)
    {
        k++;
        if (k == min(j, n))
            return -1;
    }
    if (arr[k] == key)
        return k;
 
    return -1;
}
int main()
{   
    int n,t,index;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key,index;
        cin>>key;
        index=binarySearch(arr,n,key);
        if(index==-1)
            cout<<"Not Present"<<" "<<index+1<<"\n";
        else
            cout<<"Present"<<" "<<index+1<<"\n";
    }
}