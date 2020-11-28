#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
            cout<<"* ";
        if(j==0||j==n-1)
            for(int i=1;i<n-1;i++) cout<<"* ";
        else  for(int i=1;i<n-1;i++) cout<<"  ";
    cout<<"*\n";
    }

    return 0;
}
