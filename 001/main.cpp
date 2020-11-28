#include<iostream>
using namespace std;
class Point
{
    int x, y;
    public:
    Point(int xx =10, int yy =20)
    {
        cout<<"x= "<<x<<" xx= "<<xx<<endl;
        cout<<"y= "<<y<<" yy= "<<yy<<endl;
        x = xx;
        y = yy;
    }
    Point operator + (Point objPoint)
    {
        Point objTmp;
        objTmp.x = objPoint.x + this->x;  //
        //cout<<objPoint.x << this->x<<endl;
        objTmp.y = objPoint.y + this->y;
        return objTmp;
    }
    void Display(void)
    {
        cout<< x << " " << y;
    }
};
int main()
{

    Point objP1;
    Point objP2(1, 2);
    Point objP3 = objP1 + objP2; // It basically means objP1.operator+(objP2);
    objP3.Display();
    return 0;
}
/*output
x=garbage xx= 10
y=garbage yy= 20
x=garbage xx= 1
y=garbage yy= 2
11 22
*/

