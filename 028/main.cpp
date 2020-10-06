#include <iostream>
using namespace std;

class BixBase
{
    public:
    int x, y;
    public:
    BixBase(int xx = 0, int yy = 0)
    {
        x = xx;
        y = yy;
    }
 };
class BixDerived : public BixBase
{
    private:
        BixBase objBase;
    public:
    BixDerived(int xx, int yy) : BixBase(xx), objBase(yy)
    {
        cout << this->x   << " "
             << this->y   << " "
             << objBase.x << " "
             << objBase.y << " ";
    }
    ~BixDerived()
    { }
};
int main()
{
    BixDerived objDev(11, 22);
    return 0;
}
