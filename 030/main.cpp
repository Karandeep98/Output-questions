#include <iostream>
using namespace std;

class IndiabixSample
{
    private:
    int AdditionOne(int x, int y = 1)
    {
        return x * y;
    }

    public:
    int AdditionTwo(int x, int y = 1)
    {
        return x / y;
    }
};
int main()
{
    IndiabixSample objBix;
    cout<<objBix.AdditionOne(4, 8)<<" ";
    cout<<objBix.AdditionTwo(8, 8);
    return 0;
}
