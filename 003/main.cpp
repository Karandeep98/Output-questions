#include<iostream>
using namespace std;
class IndiaBix
{
    int x, y;
    public:
        IndiaBix()
        {
            x = 0;
            y = 0;
        }
        IndiaBix(int xx, int yy)
        {
            x = xx;
            y = yy;
        }
        IndiaBix(IndiaBix *objB)
        {
            x = objB->x;
            y = objB->y;
        }
        void Display()
        {
            cout<< x << " " << y;
        }
};
int main()
{
    IndiaBix objBix( new IndiaBix(20, 40) );
    objBix.Display();
    return 0;
}
