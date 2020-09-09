#include<iostream>
using namespace std;
class IndiaBix
{
    int x;
    float y;
    public:
    IndiaBix(int x)
    {
        this->x = x;
    }
    /*IndiaBix(int p = 0, int q = 10)
    {
        x = p += 2;
        y = q * 1.0f;
    }*/
    void SetValue(int &y, float z)
    {
        x = y;
        y = (int)z;
    }
    void Display(void)
    {
        cout<< x;
    }
};
int main()
{
    int val = 12;
    IndiaBix objBix(val);
    //IndiaBix objTmp();
    //objBix.SetValue(val, 3.14f);
    objBix.Display();
    return 0;
}
