#include <iostream>
using namespace std;

void Tester(int xx, int yy = 5);
class IndiaBix
{
    int x;
    int y;
    public:
    void Tester(int xx, int yy = 5)
    {
        x = xx;
        y = yy;
        cout<< x++ % --y;
    }
};
int main()
{
    IndiaBix objBix;
    objBix.Tester(5, 5);
    return 0;
}
