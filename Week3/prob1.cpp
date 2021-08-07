#include<iostream>
using namespace std;
void insertionsort(int a[], int n){
    int comp=0;
        int swap=0;
    for(int i=1;i<n;i++){
        int j=i-1;
        int current=a[i];
        swap++;
        while(a[j]>current&&j>=0){
            comp++;
            swap++;
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
 
    }
    cout<<"Comparisons = "<<comp<<"\n";
    cout<<"Shift = "<<swap<<"\n"; 
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for (int i =0;i<n;i++){
            cin>>a[i];
        }
        insertionsort(a,n);
    }
}