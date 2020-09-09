#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
ull fact(ull n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    string s = to_string(fact(n));
    int len=s.length();
    int minvalue =6;
    cout<<s[0]<<".";
    minvalue = min(minvalue,len);
    for(int i=1;i<=minvalue;i++){
        cout<<s[i];
    }
    cout<<"e + "<<len-1;

    return 0;
}
