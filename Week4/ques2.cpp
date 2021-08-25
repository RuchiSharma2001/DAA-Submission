#include<iostream>
using namespace std;
int comparisons;
int swaps;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
    swaps++;
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
      
        if (arr[j] < pivot) 
        {   comparisons++;
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nComparisons "<<comparisons<<"\n";
    cout<<"\nSwaps "<<swaps<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        comparisons=0;
        swaps=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        quickSort(arr,0,n-1);
        printArray(arr,n);
    }
    return 0;
}