#include <iostream>
#include<math.h>

using namespace std;

bool isPowerOfTwo (int n)
{
   if(n==0)
   return false;

   return (ceil(log(n)/log(2)) == floor(log(n)/log(2)));
}

/*Driver code*/
int main()
{
   // cout<<(2&&(11));
    unsigned char a=5;
   // int c=b>>1;
    //cout<<c;
    a=~a;
    cout<<a;
    //isPowerOfTwo(31)? cout<<"Yes\n": cout<<"No\n";
    //isPowerOfTwo(64)? cout<<"Yes\n": cout<<"No\n";
    return 0;
}
