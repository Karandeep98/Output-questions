#include <iostream>
using namespace std;

enum xyz
{
    a, b, c
};
int main()
{
    int x = a, y = b, z = c;
    int &p = x, &q = y, &r = z;
    cout<< p << " " << q << " " << r<<" "<< x << " " << y << " " << z<<endl;
    p = z;
    cout<< p << " " << q << " " << r<<" "<< x << " " << y << " " << z<<endl;
    p = ++q;
    cout<< p << " " << q << " " << r<<" "<< x << " " << y << " " << z<<endl;
    q = ++p;
    cout<< p << " " << q << " " << r<<" "<< x << " " << y << " " << z<<endl;
    z = ++q + p++;
    cout<< p << " " << q << " " << r<<" "<< x << " " << y << " " << z<<endl;
   // cout<< p << " " << q << " " << z;
    return 0;
}
