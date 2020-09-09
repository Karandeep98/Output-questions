#include<iostream>
using namespace std;
class BixBase
{
    public:
        int x;
    BixBase()
    {

        cout<< "Base OK. ";
    }
};
class BixDerived: public BixBase
{
    public:
    BixDerived()
    {
        cout<< "Derived OK. ";
    }
    ~BixDerived()
    {
        cout<< "Derived DEL. ";
    }
};
int main()
{
    BixBase    objB();
    BixDerived objD;
    objD.~BixDerived();
    return 0;
}
