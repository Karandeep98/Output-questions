#include<iostream>
using namespace std;
class IndiaBix
{
    int x, y, z;
    public:
    IndiaBix(int x = 100, int y = 30, int z = 0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        Display();
    }
    void Display()
    {
        cout<< x << " " << y << " " << z;
    }
};
int main()
{
    int a = 0, b = 1, c = 2;
    int &x = ++a;
    int &y = --b;
    int z = c + b - -c;
    IndiaBix objBix(x, y, z);
    return 0;
}
