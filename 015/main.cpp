#include<bits/stdc++.h>
using namespace std;

int main()
{
	long double p, g,x, a, y, b, ka, kb;
	cout<<"Enter any prime number p:";
	cin>>p;
	cout<<"Enter primitive root of p:";
	cin>>g;
	cout<<"Enter private key of User A:";
	cin>>a;
	cout<<"Enter private key of User B:";
	cin>>b;
	x=pow(g,a);
	x=fmod(x,p);
	cout<<"\nKey shared by user A over public channel:"<<x;
	y=pow(g,b);
	y=fmod(y,p);
	cout<<"\nKey shared by user B over public channel:"<<y;
	ka=pow(y,a);
	ka=fmod(ka,p);
	cout<<"\nSecret key for user A:"<<ka;
	kb=pow(x,b);
	kb=fmod(kb,p);
	cout<<"\nSecret key for user B:"<<kb;
	return 0;
}
