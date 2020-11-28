#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20;
    int *ptr = &x;
    int &ref = y;  //This acts exactly the same as a reference variable in call by reference

    *ptr++;
     ref++;
        cout<<y;
        y=6;
        cout<<ref;

    cout<< x << " " << y;

    return 0;
}
