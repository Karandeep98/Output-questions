#include<iostream>
using namespace std;

class BixBase
{
    int x, y;
    public:
    BixBase(int xx = 5, int yy = 8)
    {
        x = xx;
        y = yy;
    }

    void Show()
    {
        cout<< x * y << endl;
    }
};
class BixDerived : public BixBase
{
    private:
        BixBase objBase;
    public:
    BixDerived(int xx, int yy) : BixBase(xx,yy) //Here the parameters doesn't matter because explicit
                                                //call to base constructor is always without parameters
    {
        objBase.Show();
    }
};
int main()
{
    BixDerived objDev(10, 20);
    return 0;
}
