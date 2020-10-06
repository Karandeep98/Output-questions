#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
   //-5 -3 -2 -1 0 1 2 3 4 5
   vector<int> v;
   int count=0;
   for(int i=0;i<n;i++){
    if(a[i]<0) {
    v.push_back(abs(a[i]));
    count++;
    }
   }

   for(int i=0;i<count;i++){
    a.erase(a.begin()+0);
   }

   reverse(v.begin(),v.end());
   for(int i: v){
    cout<<i<<" ";
   }
   for(int i=0;i<a.size();i++){
    if(v[i]<=a[i]){
        a.insert(a.begin()+i,v[i]);
    }
   }
   for(int i: a){
    cout<<i<<" ";
   }
    return 0;
}
