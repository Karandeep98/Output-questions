#include<iostream>
using namespace std;
class BixBase
{
    public:
        float x;
};
class BixDerived : public BixBase
{
    public:
        char ch;
        void Process()
        {
            ch = (int)((x=12.0)/3.0);
        }
        void Display()
        {
            cout<< (int)ch;
        }
};
int main()
{
    class BixDerived  *objDev = new BixDerived;
    objDev->Process();
    objDev->Display();
    return 0;
}
