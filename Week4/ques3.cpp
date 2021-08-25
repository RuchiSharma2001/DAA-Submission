#include<bits/stdc++.h>
using namespace std;
int randomPartition(int arr[], int l, int r);
int kthSmallest(int arr[], int lb, int ub, int k)
{
    if (k > 0 && k <= ub - lb + 1)
    {
        int pos = randomPartition(arr, lb, ub);
 
        if (pos == k-1)
            return arr[pos];
        if (pos-lb > k-1) 
            return kthSmallest(arr, lb, pos-1, k);
        return kthSmallest(arr, pos+1, ub, k-pos+lb-1);
    }
 
    return INT_MAX;
}
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}
int randomPartition(int arr[], int l, int r)
{
    int n = r-l+1;
    int pivot = rand() % n;
    swap(&arr[l + pivot], &arr[r]);
    return partition(arr, l, r);
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
        int k;
        cin>>k;
        cout << "K'th smallest element is " << kthSmallest(arr, 0, n-1, k);
    }
}