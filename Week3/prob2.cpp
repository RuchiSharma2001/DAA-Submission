#include<iostream>
using namespace std;
void selectionsort(int a[], int n){
    int comp=0,temp;
        int swap=0;
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            comp++;
            if(a[i]>a[j]){
                temp= a[j];
                a[j]=a[i];
                a[i]=temp;
                swap++;
            }
        }
 
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
        selectionsort(a,n);
    }
}