#include <iostream>
using namespace std;

class BixBase
{
    int x;
    public:
    BixBase(int xx = 0)
    {
        x = xx;
    }
    void Display()
    {
        cout<< x ;
    }
};
class BixDerived : public BixBase
{
    int y;
    public:
    BixDerived(int yy = 0)
    {
        y = yy;
    }
    void Display()
    {
        cout<< y ;
    }
};
int main()
{
    BixBase objBase(10);
    BixBase &objRef = objBase;

    BixDerived objDev(20);
    objRef = objDev;

    objDev.Display();
    return 0;
}
