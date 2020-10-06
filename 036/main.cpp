#include <bits/stdc++.h>
using namespace std;

int main()
{
    int heads,legs;
    cin>>heads>>legs;
    int rabbit = (legs-(heads*2))/2;
    cout<<"Piegon:"<<heads-rabbit;
    cout<<"Rabbit:"<<rabbit;
 return 0;
}
