#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
  vector<double> v;
  cout<<"Enter the distances covered by racers in marathon:\n";
  while(1){
    cin>>s;
    if(s=="q") break;
    v.push_back(stod(s));
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    if(v[i]<0 || v[i]>42.195){
        cout<<"Invalid input";
        return 0;
    }
  }
  int count=0,flag=0;
  for(int i=0;i<v.size();i++){
    if(v[i]==42.195) continue;
    else if(count<3){
        cout<<v[i]<<" ";
        count++;
        flag=1;
    }
    else return 0;
  }
  if(flag==0) cout<<"Invalid Input";
    return 0;
}
