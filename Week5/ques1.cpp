#include<bits/stdc++.h>
using namespace std;
void mostFrequent(char arr[],int n)
{
    int alphabet[26]={0},max=0;
    for(int i=0;i<n;i++)
    {
        alphabet[arr[i]-'a']++;
    }
    int max_indx=0;
    for(int i=0;i<26;i++)
    {
        if(alphabet[i]>max)
        {
            max=alphabet[i];
            max_indx=i;
        }
    }
    if(max==0)
    {
        cout<<"No Duplicates Exist\n";
    }else
    {
        cout<<"most frequent element is "<<alphabet[max_indx]+'a'<<" and occurred "<<max<<"times\n";
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
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mostFrequent(arr,n);
    }
}