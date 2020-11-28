#include <iostream>

using namespace std;

int quadruple(int n,int arr[]){
    int max=0;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    int temp=arr[i]*arr[j]*arr[k]*arr[l];
                    if(temp>max) max=temp;
                }
            }
        }
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int max=quadruple(n,a);
    if(max==0) cout<<"Invalid Input";
    else cout<<max;
    return 0;
}
